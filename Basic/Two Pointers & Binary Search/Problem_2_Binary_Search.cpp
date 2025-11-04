#include <bits/stdc++.h>
using namespace std;
bool binary_search(int arr[], int n, int target)
{
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == target)
            return true;
        else if (arr[mid] > target)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    cout << (binary_search(arr, n, target) ? "Found" : "Not found");
    return 0;
}

// Concept:

// Binary Search একটি divide and conquer algorithm।
// এটি শুধুমাত্র sorted array তে কাজ করে এবং search space কে অর্ধেক করে করে খোঁজে।

// Time Complexity: O(log n)