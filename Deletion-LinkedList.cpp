//Linked list class(Get element and node)

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
    void deleteAtHead(){//Deletion from head
        if(size==0){
            cout<<"List is Empty!";
            return;
        }
        head=head->next;
        size--;
    }

    void deleteAtTail()//Deletion from tail
    {
        if(size==0){
            cout<<"List is Empty!";
            return;
    }
        Node*temp=head;
        while(temp!=NULL)
    {
        cout<<(temp->next!=tail);
    }
        temp->next=NULL;
        tail=temp;
        size--;

        
    };
     void deleteAtIdx(int idx)//Deletion at index position
     {
        if(size==0){
            cout<<"List is Empty!";
            return;
        }
       else if(idx<0||idx>=size)
       {
            cout<<"Invalid Index";
            return;
        }
        else if(idx==0) return deleteAtHead();
        else if(idx==size-1) return deleteAtTail();
        else{
            Node*temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }
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
    ll.insertAtHead(60);//{60->50->10->20->30->40}
    ll.display();
    ll.deleteAtHead();//{50->10->20->30->40}
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtIdx(3);
    ll.display();
  
   }