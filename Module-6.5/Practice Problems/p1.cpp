// Question: Take a singly linked list as input and print the size of the linked list.
#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
    }
    tail->next=newNode;
    tail=newNode;
    
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int val,count=0;
    while(1)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
        count++;
    }
    cout<<"Size of the linked list is: "<<count<<endl;
    return 0;
}