
//WE will se the size of the linked list
// 1)Linked list has unlimited size 
// 2)No contigous memory allocation

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
int n=0;
void display(Node*head){ 
 Node*temp=head;
 while(temp!=NULL){
    temp=temp->next;
    n++;
    cout<<n<<" ";
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
display(a);  
    };