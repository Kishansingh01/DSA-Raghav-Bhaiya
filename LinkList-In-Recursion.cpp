#include<iostream>
using namespace std;
class Node{//linked list node
public:
int val;//Data stored in the node
Node*next;//Pointer to the next node in the list
Node(int val){
    this->val=val;
    this->next=NULL;
}
};
void display(Node*head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
int size(Node*head){ 
 Node*temp=head;
 int n=0;
 while(temp!=NULL){
    temp=temp->next;
    n++;
    temp=temp->next;
 }
 return n;
}
void displayRec(Node*head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    displayRec(head->next);

}
int main(){
    Node*a=new Node(10);//a know b,b know c,c know d  through linking 
    Node*b=new Node(20);//That's why we called it a linked list.
    Node*c=new Node(30);
    Node*d=new Node(40);
    Node*e=new Node(50);
    a->next=b;//a arrow means address of a 
    b->next=c;
    c->next=d; 
    d->next=e; 
displayRec(a);  
    };