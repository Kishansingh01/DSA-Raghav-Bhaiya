//Linked List Cycle  141

// If i go from slower and faster in loop.So,where they do a 
// lie means slower is equal to faster if they meet then 
// it is a linked list cycle if faster came to the null then false.

// class Solution{
//     public:
//     bool hasCycle(ListNode*head){
//         ListNode*slow=head;
//         ListNode*fast=head;
//         while(fast!=NULL && fast->next!=NULL){
//             slow=slow->next;
//             fast=fast->next->next;
//             if(slow==fast) return true;
//         }
//         return false;
//     }
// }
