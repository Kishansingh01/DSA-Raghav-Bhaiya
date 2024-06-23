//This is all time better for linl list
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
int main(){
    Node*a=new Node(10);//a know b,b know c,c know d  through linking 
    Node*b=new Node(20);//That's why we called it a linked list.
    Node*c=new Node(30);
    Node*d=new Node(40);
    a->next=b;//a arrow means address of a 
    b->next=c;
    c->next=d;
    Node*temp=a; 
    while(temp!=NULL){
        cout<<temp->val<<" ";//Here we are dealing with pointers not with values 
                             //So,value is getting stored to 
        temp=temp->next;

       
    }
     cout<<"    "<<a->next->val;//Adressing to b
       cout<<"    "<<a->next->next->val;//Arrow function adressing to c through pointer
       cout<<"     "<<a->next->next->next->val;//Adressing to d.

};

//We use pointer bcz it is easy to do a traverse