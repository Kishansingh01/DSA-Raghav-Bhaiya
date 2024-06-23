// //LeetCode-237 In singly linklist we cannot go back
// //1)Delete Node in a linked list
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node*next;
//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };
// void display(Node*head){
//     while(head!=NULL){
//         cout<<head->val<<" ";
//         head=head->next;
//     }
//     cout<<endl;
// };
//     Node* deletenode(Node*head,Node*target){//This is for the indexing deletion
//   // Node*deletenode(Node* head,int targetVal){
//     if(head==target){//this is for node
//    //if(head->val==targetVal){//This deletion is for target value
//          head=head->next;
//          return head;};
//     Node*temp=head;
//      while(temp->next!=target){//This is for index
//      //while(temp->next->val!=targetVal){
//           temp=temp->next;
//     }
//     temp->next=temp->next->next;
//     return head;
    
// };
// int main(){
//     Node* a=new Node(10);
//     Node* b=new Node(20);
//     Node* c=new Node(30);
//     Node* d=new Node(40);
//     Node* e=new Node(50);
//     a->next=b;
//     b->next=c;
//     c->next=d;
//     d->next=e;
//     Node*head=a;
//     head=deletenode(head,a);//here i have taken head (a) and removed d (40)
//     //head=deletenode(head,30);//This is for value deleting
//     display(head);//This is for the deleting the index
// }



// //LEETECODE(237) i have given a question where there is no any head values  and i have to target that value and remove 
// //that value
// #include<iostream>
// using namespace std;
// class ListNode{
//     public:
//     int val;
//     ListNode*next;//This is already built in function
//     ListNode(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };


// void deleteNode(ListNode*target){
//     target->val=target->next->val;//I have to write till then;
//     target->next=target->next->next;
// }


// LEETCODE 876 Find the middle of the given linked list for both odd and even 
// but in case of even find right of the middle in linked list

#include<iostream>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode*next;
    ListNode(int val){
        this->val=val;
        this->next=NULL;
    }
};
int len=0;
ListNode* temp=head;
while(temp!=NULL){
    len++;//Main code
    temp=temp->next;
}
int midIdx=len/2;
ListNode*mid=head;//This is the main code
for(int i=1;i<=midIdx;i++){}
mid=mid->next;}
return mid;}};


//BUT intreviewer wants to solve this question in one path

// We will do it by using slow and fast technique where slow increased by.next
// and fast increased by .next->next

class Solution{
    public:
    ListNode*middleNode(ListNode*head){
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast->next!==NULL && fast!=NULL){//Here first we have to check whether fat is null or not
                                               //bcz after checking fast we can check fast next whether it is null or not
                                               //thats why u have to make firs first!=NULL(Even) aftre First->next!=NULL(Odd)
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
}

//If i have to find middle of left of linked list.

while(fast->next->next!=NULL){
    slow=slow.next;
    fast=fast->next->next;
}


