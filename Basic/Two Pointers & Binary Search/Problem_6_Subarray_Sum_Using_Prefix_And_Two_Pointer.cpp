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
    int target;
    cin >> target;
    int start = 0, end = 0, sum = 0;
    while (end < n)
    {
        sum += arr[end];
        while (sum > target && start <= end)
        {
            sum -= arr[start];
            start++;
        }
        if (sum == target)
        {
            cout << "Subarray from " << start << " to " << end << endl;
        }
        end++;
    }
    return 0;
}