#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int k;
    cin >> k;
    int left = 0, right = 0;
    long long sum = 0, ans = 0;    
    while (right < n)
    {
        sum += nums[right];
        if (right - left + 1 == k)
        {
            ans = max(ans, sum);
            sum -= nums[left];
            left++;
            right++;
        }
        else
        {
            right++;
        }
    }
    cout << ans << endl;
    return 0;
}