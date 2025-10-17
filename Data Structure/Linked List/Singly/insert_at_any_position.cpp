#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
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
void insert_at_position(Node *&head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for(int i=1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout<< endl<<"Insert at position "<<pos<<endl<<endl;

}
void print_linked_list(Node *head)
{
    cout<<endl;
    cout << "Your Linked List: ";
    Node *tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val <<" ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    while(true)
    {
        cout << "Options 1: Insert at Tail."<< endl;
        cout << "Options 2: Print Linked List"<< endl;
        cout << "Options 3: Insert at any position."<<endl;
        cout << "Options 4: Exit"<< endl<<endl;
        int op;
        cout << "Enter any Options: ";
        cin >> op;
        if(op==1)
        {
            int val;
            cout <<endl;
            cout << "Enter Your Node: ";
            cin >> val;
            insert_at_tail(head, val);
        }
        else if(op == 2)
        {
            print_linked_list(head);
        }
        else if(op == 3)
        {
            int pos, val;
            cout << "Enter Position: ";
            cin >> pos;
            cout<< "Enter Value: ";
            cin >> val;
            insert_at_position(head, pos, val);
        }
        else if(op == 4)
        {
            break;
        }
    }
   
   return 0;
}