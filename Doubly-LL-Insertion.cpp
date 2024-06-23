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
class DLL
{ //user defined data structure
public:
        Node*head;
        Node*tail;
        int size;
        DLL()//Constructor
        {
            head=tail=NULL;
            size=0;
        }
    void insertAtTail(int val)
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
       void insertAtHead(int val)
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

      void insertAtIdx(int idx,int val)
      {//If size is Empty
        if(idx<0||idx>size)
        {
            cout<<"Invalid Index"<<endl;
        }
        else if(idx==0)
        insertAtHead(val);
        else if(idx==size) 
        insertAtTail(val);
        else{
            Node*t=new Node(val);
            Node*temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            t->prev=temp;//extra in DLL
            t->next->prev=t;//extra in DLL
           
            size++; 
            }
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
    DLL list;
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.display();
    list.insertAtTail(40);
    list.display();
    list.insertAtHead(50);
    list.display();
    list.insertAtIdx(2,60);
    list.display();

    }