#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;

    int left = 0, sum = 0, maxLen = 0;
    for (int right = 0; right < n; right++)
    {
        sum += arr[right];

        while (sum > k && left <= right)
        {
            sum -= arr[left];
            left++;
        }

        if (sum <= k)
        {
            maxLen = max(maxLen, right - left + 1);
        }
    }
    cout << "Longest Subarray Length = " << maxLen;
    return 0;
}