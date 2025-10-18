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

void print_linked_list(Node *head)
{
    cout<<endl;
    cout << "Your Linked List: ";
    Node *tmp = head;
    int count=0;
    while(tmp != NULL)
    {
        cout << tmp->val <<" ";
        tmp = tmp->next;
        count++;
    }
    cout << endl;
    cout<<"Size: "<<count<<endl;
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
    print_linked_list(head);
   
   return 0;
}