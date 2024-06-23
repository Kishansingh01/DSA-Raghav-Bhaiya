// In SLL->push front,push bach,pop front all have O(1) TC 
// but in pop back TC is O(n).

// I DLL->ALl upper snuff have time complexity is O(n).


//I am making the list but in a simple way 
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node*next;
// };
// int main(){
//     //10,20,30,40
//     Node a;
//     a.val=10;
//     Node b;
//     b.val=20;
//     Node c;
//     c.val=30;
//     Node d;
//     //I am making a new linked list here
//     d.val=40;
//     a.next=&b;
//     b.next=&c;
//     c.next=NULL;
// }


//Making linked list by using of the constructor
// #include<iostream>
// using namespace std;
// class Node{//link list Node
//     public:
//     int val;
//     Node*next;
//     Node(int val){//Constructor is using
//         this->val=val;
//         this->next=NULL;}//This is the proper linklist node
    
// };
// int main(){
//     Node a(10);
//     Node b(20);
//     Node c(30);
//     Node d(40);
//     a.next=&b;
//     b.next=&c;
//     c.next=&d;
    //d.next=NULL; No need to write bcz already defined in the constructor
    // cout<<a.next<<endl;//This is the adress of B.
    // cout<<&a<<endl;
    // cout<<a.val<<endl;
    // cout<<d.val;
// Here i have  add a.next to b by pointer till D.
//}






//THIS IS the linked list which we will use

#include<iostream>
using namespace std;
class Node{//link list Node
    public:
    int val;//Data stored in the node
    Node*next;//Pointer to the next node in the list
    Node(int val){//Constructor is using
        this->val=val;
        this->next=NULL;}//This is the null for after all the values it will go null i think like it
    
};
int main(){
    Node a(10); //a,b,c,d sabke baad ek null,Pointer rahega bcz already defined there
    Node b(20);
    Node c(30);
    Node d(100);
    a.next=&b;  //But yahan pr null ko hatakar a ke null pr b ka adress 
               //    aa rha hai ,b ke null hatkar c kaa adress aa rha hai aur wo link 
                 //    ho rhe hai ek dusre se
    b.next=&c;
    c.next=&d;
    // Node*ptr=&b;  //Here i have print value ob b through adressing
    // cout<<(*ptr).val<<endl;
    // ptr->val=80;//ya  (*ptr).val=60;//Here i have updated the value of b
    // cout<<b.val;
     cout<<(a.next)->val<<endl; // ya(*(a.next)).val;//Value of b i am printing
    a.next->val=70;//I am updating b value by adressing in oops
    cout<<a.next->val<<endl;
    cout<<b.next->val<<endl;//i will get c value
    cout<<((a.next)->next)->val<<endl;//mtlb a ka nxt ka adress means b ka adress ka nxt ka adress mtlb c ka
                                //adress ka value
    cout<<(((a.next)->next)->next)->val<<endl;//mtlb a ka nxt b,b ka nxt c,c ka nxt d ke  adress ka value by oops pointer.
    cout<<(*((*((*(a.next)).next)).next)).val;//finding d value by pointer
    };

    // Overall i have make a next to null and its after i have give 
    // the adress of next node to the previous node.So,we made linklist
