//Print reverse element ,In singly list we can do by using of the
//recursion but In doubly linked list we can simply use 
// #include<iostream>
// using namespace std;
// class Node{//Doubly linked list Node
//     public:
//     int val;
//     Node*next;
//     Node*prev;//extra for DLL
//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//         this->prev=NULL;//Extra for DLL
//     }
// };
// void display(Node* head){
//         while(head){
//             cout<<head->val<<" ";
//             head=head->next;
//         }
//         cout<<endl;
//     }
// void displayRec(Node* head){//o(n) space will be taken
//     if(head==NULL) return;//This is recursion qality that after printing it will go 
//                           //Back,Thats why it is printing reverse
//     displayRec(head->next);
//      cout<<head->val<<" ";

// }

// int main(){
//     Node*a=new Node(10);
//     Node*b=new Node(20);
//     Node*c=new Node(30);
//     Node*d=new Node(40);
//     Node*e=new Node(50);
//     a->next=b;
//     b->next=c;
//     c->next=d;
//     d->next=e;

//     e->prev=d;
//     d->prev=c;
//     c->prev=b;
//     b->prev=a;
//     display(a);
//     displayRec(a);

// }



//2nd Method
//By using Doubly linked list

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
    void displayRev(Node*tail){
        while(tail){
            cout<<tail->val<<" ";
            tail=tail->prev;
        }
        cout<<endl;
    }

void displayRec(Node* head){//o(n) space will be taken
    if(head==NULL) return;//This is recursion qality that after printing it will go 
                          //Back,Thats why it is printing reverse
    displayRec(head->next);
     cout<<head->val<<" ";
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
    displayRec(a);
    displayRev(e);//going from the last thats why i have taken e value.
     displayRev(c);
}