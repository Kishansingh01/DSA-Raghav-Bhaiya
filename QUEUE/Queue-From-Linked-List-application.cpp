//Linked list implementation in queue

// Advantage of linked list implementation of queue 
// over array implementation
// 1)Unlimites size 
// 2)Natural,It is same like Link list implementation 
// 3)Wastage of size is not there 


// LL is taking almost double size bcz  for each element we have 
// a Node->val,*Next so ,it is the difference in array also.





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
// class Queue{ //user defined data structure
// public:
//         Node*head;
//         Node*tail;
//         int size;
//         Queue(){
//             head=tail=NULL;
//             size=0;
//        }
//     void push(int val){//If size is Empty
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
       
//     void pop(){//Deletion from head
//         if(size==0){
//             cout<<"Queue is Empty!";
//             return;
//         }
//         head=head->next;
//         size--;
//     }
//     int front(){
//         if(size==0){
//             cout<<"Queue is Empty";
//             return -1;
//         }
//        return head->val;
//     }
//     int back(){
//         if(size==0){
//             cout<<"Queue is empty";
//             return -1;
//         }
//         return tail->val;
//     }


//     void display(){
//         Node*temp=head; 
//         while(temp!=NULL){
//             cout<<temp->val<<" ";
//             temp=temp->next;
//         }
//          cout<<endl;
//     }
//     int size1(){//This is a function of size1
//         return size;
//     }
//     bool empty(){
//         if(size==0) return true;
//         else return false;
//     }
// };
// int main(){
//     Queue q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.display();
//     q.push(50);
//     q.push(60);
//     q.display();
//     q.pop();
//     q.display();

// }






// Advantage of linked list implementation of queue 
// over array implementation
// 1)Unlimites size 
// 2)Natural,It is same like Link list implementation 
// 3)Wastage of size is not there 


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
class Queue{ //user defined data structure
public:
        Node*head;
        Node*tail;
        int size;
        Queue(){
            head=tail=NULL;
            size=0;
       }
    void push(int val){//If size is Empty
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
       
    void pop(){//Deletion from head
        if(size==0){
            cout<<"Queue is Empty!";
            return;
        }
        Node*temp=head;
        head=head->next;
        size--;
        delete(temp);//Wastage nhi ho rhi memory
    }
    int front(){
        if(size==0){
            cout<<"Queue is Empty";
            return -1;
        }
       return head->val;
    }
    int back(){
        if(size==0){
            cout<<"Queue is empty";
            return -1;
        }
        return tail->val;
    }


    void display(){
        Node*temp=head; 
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
         cout<<endl;
    }
    int size1(){//This is a function of size1
        return size;
    }
    bool empty(){
        if(size==0) return true;
        else return false;
    }
};
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    q.push(50);
    q.push(60);
    q.display();
    q.pop();
    q.display();

}



   









