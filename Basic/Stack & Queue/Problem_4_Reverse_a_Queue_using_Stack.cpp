#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;

    for (int i = 1; i <= 10; i++)
    {
        q.push(i);
    }
    
    stack<int> st;

    while (!q.empty()) // queue -> stack
    {
        st.push(q.front());
        q.pop();
    }

    while (!st.empty()) // stack -> queue
    {
        q.push(st.top());
        st.pop();
    }
    cout <<"After reversed: ";
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}