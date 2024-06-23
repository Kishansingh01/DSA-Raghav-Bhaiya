//Temp=a,Mtlb temp ka alag adress but a ka bhi value+adress temp me stored
#include<iostream>
using namespace std;
class Node{//link list Node
    public:
    int val;
    Node*next;
    Node(int val){//Constructor is using
        this->val=val;
        this->next=NULL;}//This is the proper linklist node
    
};
int main(){
    Node a(10);     
    Node b(30);
    Node c(100);
    Node d(80);
    a.next=&b;
    b.next=&c;
    c.next=&d;
    Node temp=a;
    //while(temp.next!=NULL){//Here it will print 10,30,100 it will not print the d value which is
                             //80 bcz in d there is NULL so,it will break and not print
                            //  To avoid we use 1 in while loop and make a condition to break 
                            //  code after NULL
        while(1){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp=*(temp.next);

    }
    };