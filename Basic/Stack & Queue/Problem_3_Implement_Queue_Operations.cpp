#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;

    q.push(10);
    q.push(100);
    q.push(1000);
    
    cout<<"Front Value: "<<q.front()<<endl;
    cout<<"Back Value: "<<q.back()<<endl;

    q.pop();

    cout<<"After pop new front: "<<q.front()<<endl;
}