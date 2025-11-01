#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stack<char> st;
    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            st.push(c);
        }
        else
        {
            char top = st.top();
            if ((top == '(' && c == ')') || (top == '{' && c == '}') || (top == '[' && c == ']'))
            {
                st.pop();
            }
        }
    }
    if (st.empty())
    {
        cout << "Balanced";
    }
    else
        cout << "Unbalanced";
}