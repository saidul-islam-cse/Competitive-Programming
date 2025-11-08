#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, q;
    cin >> n >> q;
    int x;
    cin >> x;
    while (q--)
    {
        char c;
        cin >> c;
        long long v;
        cin >> v;
        if (c == '*')
        {
            n += v;
        }
        else if (c == '+')
        {
            n -= v;
        }
        else if (c == '\\')
        {
            n *= v;
        }
    }
    long long value = llabs(n);
    if (x > value)
    {
        cout << value;
    }
    else
    {
        long long mod = 1;
        for (int i = 0; i < x; i++)
        {
            mod *= 10;
        }
        cout << llabs(value % mod);
    }

    return 0;
}