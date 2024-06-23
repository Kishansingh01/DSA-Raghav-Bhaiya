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
class LinkedList{ //user defined data structure
public:
        Node*head;
        Node*tail;
        int size;
        LinkedList(){
            head=tail=NULL;
            size=0;
       }
    void insertAtTail(int val){//If size is Empty
        Node*temp=new Node(val);
        if(size==0){
            head=tail=temp;
        }
        else{  //If size has some values
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
       void insertAtHead(int val){//If size is Empty
        Node*temp=new Node(val);
        if(size==0){
            head=tail=temp;
        }
        else{  //If size has some values
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void display(){
        Node*temp=head; 
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
         cout<<endl;
    }
};
   int main(){
    LinkedList ll;
    ll.insertAtTail(10);//{10->NULL}
     ll.display();
       
     ll.insertAtTail(20);//{10->20->NULL}
     ll.display();
      
    ll.insertAtTail(30);
    ll.insertAtTail(40);//{10->20->30->40}
    ll.display();//I am taking element in the last and printing it 
    ll.insertAtHead(50);//{50->10->20->30->40}
    ll.display();
    ll.insertAtHead(60);
    ll.display();
  
   }