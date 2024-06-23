// #include<iostream>
// using namespace std;
// class Node{//linked list node
// public:
// int val;//Data stored in the node
// Node*next;//Pointer to the next node in the list
// Node(int val){
//     this->val=val;
//     this->next=NULL;
// }
// };
// class LinkedList{ //user defined data structure
// public:
//         Node*head;
//         Node*tail;
//         int size;
//         LinkedList(){
//             head=tail=NULL;
//             size=0;
//        }
//     void insertAtEnd(int val){//If size is Empty
//         Node*temp=new Node(val);
//         if(size==0){
//             head=tail=temp;
//         }
//         else{  //If size has some values
//             tail->next=temp;
//             tail=temp;
//         }
//         size++;
//     }
//     void display(){
//         Node*temp=head; 
//         while(temp!=NULL){
//             cout<<temp->val<<" ";
//             temp=temp->next;
//         }
//          cout<<endl;
//     }
// };
//    int main(){
//     LinkedList ll;
//     ll.insertAtEnd(10);//{10->NULL}
//      ll.display();
//       cout<<ll.size<<endl; 
//      ll.insertAtEnd(20);//{10->20->NULL}
//      ll.display();
//       cout<<ll.size<<endl;
//     ll.insertAtEnd(30);
//     ll.insertAtEnd(40);
//     ll.display();//I am taking element in the last and printing it 
//     cout<<ll.size<<endl;//I am printing size
//    }


                                 //2nd Method
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
void insertAtEnd(Node*head,int val){
    Node*t=new Node(val);
    while(head->next!=NULL) //here it is appending
        head=head->next;
       head->next=t;
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
display(a);  
insertAtEnd(a,90);
display(a);
    };
