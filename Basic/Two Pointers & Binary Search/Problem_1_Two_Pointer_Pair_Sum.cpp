#include <bits/stdc++.h>
using namespace std;
bool pairWithSum(int arr[], int n, int target)
{
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        if (arr[left] + arr[right] == target)
            return true;
        else if (arr[left] + arr[right] < target)
            left++;
        else
            right--;
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
    if (pairWithSum(arr, n, target))
    {
        cout << "Pawa gece";
    }
    else
    {
        cout << "Pawa jaini";
    }
    return 0;
}


// Concept:

// Two Pointer technique ব্যবহার করা হয় যখন আমাদের sorted array বা linear data structure এ দুই দিক থেকে traverse করে কোনো condition satisfy করতে হয়।