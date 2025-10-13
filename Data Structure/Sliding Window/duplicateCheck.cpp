#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool containsUniqueSubarray(vector<int>& nums, int k) {
    if (k <= 0) {
        return false;
    }
    
    unordered_map<int, int> window;
    
    // First, fill the initial window of size k
    for (int i = 0; i < k; ++i) {
        window[nums[i]]++;
    }
    
    // Check if the initial window contains duplicates
    if (window.size() == k) {
        return true;
    }
    
    // Slide the window through the rest of the array
    for (int i = k; i < nums.size(); ++i) {
        // Remove the oldest element from the window
        int old_element = nums[i - k];
        window[old_element]--;
        if (window[old_element] == 0) {
            window.erase(old_element);
        }
        
        // Add the new element to the window
        int new_element = nums[i];
        window[new_element]++;
        
        // Check if the current window contains duplicates
        if (window.size() == k) {
            return true;
        }
    }
    
    return false;
}

int main() {
    vector<int> nums1 = {1, 2, 3, 4, 5, 6};
    int k1 = 3;
    cout << "Example 1: " << (containsUniqueSubarray(nums1, k1) ? "true" : "false") <<endl; // Output: true

    vector<int> nums2 = {1, 2, 3, 2, 5};
    int k2 = 4;
    cout << "Example 2: " << (containsUniqueSubarray(nums2, k2) ? "true" : "false") <<endl; // Output: false

    return 0;
}