// In singly list i can go back but in doubly list i ca go back

// In doubly linked list each node stored previous and next adress
// Thats why in doubly linked lisy head previous will also come

// We cannot go previous and next after from any NULL.
//If any node of list is given ,we can traverse through the entire list

#include<iostream>
using namespace std;
class Node{//Doubly linked list Node
    public:
    int val;
    Node*next;
    Node*prev;//extra for DLL
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;//Extra for DLL
    }
};
void display(Node* head){
        while(head){
            cout<<head->val<<" ";
            head=head->next;
        }
        cout<<endl;
    }
int main(){
    Node*a=new Node(10);
    Node*b=new Node(20);
    Node*c=new Node(30);
    Node*d=new Node(40);
    Node*e=new Node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;

    e->prev=d;
    d->prev=c;
    c->prev=b;
    b->prev=a;
    display(a);

}