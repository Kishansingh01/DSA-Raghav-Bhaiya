//DEQUE->Doubly Ended Queue(Dek)

// Means in queue push and pop can be happens from the both side
//  from the front and from the rear in O(1) TC.

//NOTE:-I am designing DEQUE from doubly Link list 

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
class Deque
{ //user defined data structure
public:
        Node*head;
        Node*tail;
        int size;
        Deque()//Constructor
        {
            head=tail=NULL;
            size=0;
        }
    void pushBack(int val)
    {//If size is Empty
        Node*temp=new Node(val);
        if(size==0)
        {
            head=tail=temp;
        }
        else
        {  //If size has some values
            tail->next=temp;
            temp->prev=tail;//Extra in DLL
            tail=temp;
        }
        size++;
    }
       void pushFront(int val)
       {//If size is Empty
        Node*temp=new Node(val);
        if(size==0)
        {
            head=tail=temp;
        }
        else
        {  //If size has some values
            temp->next=head;
            head->prev=temp;//Extra 
            head=temp;
        }
        size++;
        }

   void popFront(){
    if(size==0){
        cout<<"List is Empty"<<endl;
        return;
    }
    head=head->next;
    if(head) head->prev=NULL;//extra
    if(head=NULL) tail=NULL;//extra
    size--;
   }
   void popBack(){
    if(size==0){
        cout<<"List is Empty"<<endl;
        return;}
      }
      else if(size==1){
        popFront();
        return;
      }
      Node*temp=tail->previous;
      temp->next=NULL;
      tail=temp;
      size--;

      int front(){
        if(size==0){
            cout<<"queue is Empty"<<endl;
            return -1;
        }
        return head->val;

      }
      int back(){
        if(size==0){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        return tail->val;
      }
      int size1(){
        return size;
      }
      bool empty(){
        if(size==0) return true;
        else return false;
      }

    void display()
    {
        Node*temp=head; 
        while(temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
         cout<<endl;
    }
};
int main(){
    Deque dq;
    dq.pushBack(10);
    dq.pushBack(20);
    dq.pushBack(30);
    dq.pushBack(40);
    dq.display();
    dq.popBack();
     dq.display();
     dq.popFront();
     dq.display();
     dq.pushFront(50);
     dq.display();
     cout<<dq.front()<<endl;
     cout<<dq.back()<<endl;

}
  

    



