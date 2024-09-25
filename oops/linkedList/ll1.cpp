#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void Printnodes(Node * &head)
{
    Node *curr=head;
    while(curr!=NULL)                              
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
void Insertnodesathead(Node * &head,int data)
{
    Node *temp=new Node(data);
    temp->next=head;
    head=temp;
}
void insertatend(Node * &tail,int data)
{
    Node *temp=new Node(data);
    tail->next=temp;
    //all are correct
    // temp->next=NULL;
    // temp=tail;
    temp=tail->next;
}
void Insertatposition(Node *node,int pos,int data)
{
    Node * temp=node;
    int c=1;
    while(c<pos-1)
    {
        temp=temp->next;
        c++;
    }
    Node *nodetostrt=new Node(data);
    nodetostrt->next=temp->next;
    temp->next=nodetostrt;
}
int main()
{
    Node* node1=new Node(1);
    // cout<<head->data<<endl;
    // cout<<head->next;
    // Printnodes(head);
    Node *head=node1;
    Node *tail=node1;
    Printnodes(head);
    cout<<endl;
    Insertnodesathead(head,2);
    Printnodes(head);
    cout<<endl;
    Insertnodesathead(head,3);
    Printnodes(head);
    cout<<endl;
    Insertnodesathead(head,11);
    Printnodes(head);
    cout<<endl;
    insertatend(tail,4);
    Printnodes(head);
    cout<<endl;
    Insertatposition(head,3,5);
    Printnodes(head);
    return 0;
}