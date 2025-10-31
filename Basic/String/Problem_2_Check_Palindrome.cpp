#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    char start = 0;
    char end = s.size() - 1;
    bool flag = true;
    while (start < end)
    {
        if (s[start] != s[end])
        {
            flag = false;
            break;
        }
        start++;
        end--;
    }
    if (flag == false)
        cout << "Not Palindrome";
    else
        cout << "Palindrome";
    return 0;
}