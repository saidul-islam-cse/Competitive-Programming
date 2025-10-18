#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
bool check_duplicate(Node *head)
{
    set<int>seen;
    Node *tmp = head;

    while(tmp != NULL)
    {
        if(seen.find(tmp->val) != seen.end())
        {
            return true;
        }
        else
        {
            seen.insert(tmp->val);
        }
        tmp = tmp->next;
    }
    return false;
}

int main()
{
    Node *head = NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)break;
        insert_at_tail(head, val);
    }
    bool bol = check_duplicate(head);
    if(bol)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
   
   return 0;
}