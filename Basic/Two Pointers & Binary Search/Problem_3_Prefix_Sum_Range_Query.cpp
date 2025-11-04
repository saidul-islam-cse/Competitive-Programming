#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int pre[n];
    pre[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + arr[i];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        int sum = 0;
        if (l == 0)
            sum = pre[r];
        else
            sum = pre[r] - pre[l - 1];
        cout << sum << endl;
    }
    return 0;
}


// Concept:

// Prefix Sum হলো এমন একটি টেকনিক যা array এর cumulative sum আগে থেকে store করে রাখে, যাতে range sum queries দ্রুত বের করা যায়।

// Use Case:

// Subarray sum in O(1)

// Range queries optimization