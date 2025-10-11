/*Restated Problem:
Given an array nums and an integer target, count the number of triplets (i, j, k) with i < j < k such that nums[i] +
nums[j] + nums[k] < target.*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int target;
    cin >> target;
    sort(nums.begin(), nums.end());
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int left = i + 1;
        int right = n - 1;
        while (left < right)
        {
            int sum = nums[i] + nums[left] + nums[right];
            if (sum < target)
            {
                count += (right - left);
                left++;
            }
            else
            {
                right--;
            }
        }
    }
    cout << count << endl;

    return 0;
}

/*
Step-by-step Example:
Input: nums = [-2, 0, 1, 3], target = 2
After sorting: [-2, 0, 1, 3]
• Try all possible i, left, right combinations.
• The answer is 2 (triplets: (-2, 0, 1) and (-2, 0, 3))
*/