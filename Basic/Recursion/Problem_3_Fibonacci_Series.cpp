#include <bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    if (n < 0)
        cout << "Error! fibonacci of a negative number doesn't exit";
    cout << "Fibonacci series: ";
    for (int i = 0; i < n; i++)
    {
        cout << fibo(i) << " ";
    }

    return 0;
}