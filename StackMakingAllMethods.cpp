//I am making stack using array by oops concept

// #include<iostream>
// using namespace std;
// class Stack{//User defined data structure
// public:
//  int arr[5];
//  int idx=-1;
//  Stack(){
//     idx=-1;
//  }
//  void push(int val){
//     if(idx==sizeof(arr)/4-1){
//         cout<<"Stack is full  "<<endl;
//         return;
//     }
//     idx++;
//     arr[idx]=val;
//  }
//  void pop(){
//     if(idx==-1){
//         cout<<"Stack is Empty"<<endl;
//         return;
//     }
//     idx--;
//  }
//  int top(){
//     if(idx==-1){
//         cout<<"Stack is empty!"<<endl;
//         return -1;
//     }
//     return arr[idx];
//  }
//  int size(){
//    return idx+1;
//  }
//  void display(){
//    for(int i=0;i<=idx;i++){
//       cout<<arr[i]<<endl;

//    }
//    cout<<endl;
//  }
// };
// int main(){
//     Stack st;
//     cout<<st.top()<<endl;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     st.push(60);
//    // cout<<st.top()<<endl;
//    // cout<<st.size()<<endl;
//    //  st.pop();
//    //  cout<<st.size()<<endl;
//    // cout<<st.top();
//    // cout<<st.size()<<endl;
//    // cout<<st.top()<<endl;
//    st.display();
// }







//   Making Stack by using vector concept

// #include<iostream>
// #include<vector>
// using namespace std;
// class Stack{//User defined data structure
// public:
//  vector<int>v;//Unlimited size no overflow condition
//  Stack(){
//  }
//  void push(int val){
//     v.push_back(val);
//     } 
//  void pop(){
//     if(v.size()==0){
//         cout<<"Stack is Empty"<<endl;
//         return;
//     }
//     v.pop_back();
//  }
//  int top(){
//     if(v.size()==0){
//         cout<<"Stack is empty!"<<endl;
//         return -1;
//     }
//     return v[v.size()-1];
//  }
//  int size(){
//    return v.size();
//  }
// };
// int main(){
//     Stack st;
//     cout<<st.top()<<endl;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     st.push(60);
   // cout<<st.top()<<endl;
   // cout<<st.size()<<endl;
    //st.pop();
    //cout<<st.size()<<endl;
   // cout<<st.top();
//    cout<<st.size()<<endl;
//    cout<<st.top()<<endl;
// }





//Making stack using linked list
//We know that linked list has unlimited size

#include<iostream>
using namespace std;
class Node{
   public:
   int val;
   Node*next;
   Node(int val){
      this->val=val;
      this->next=NULL;
   }
};
class Stack{
   public:
   Node*head;
   int size;
   Stack(){
     head=NULL;
     size=0;
   }
 void push(int val){
   Node*temp=new Node(val);
   temp->next=head;
   head=temp;
   size++;
 }
 void pop(){
   if(head==NULL){
      cout<<"Stack is empty!"<<endl;
      return;
   }
   head=head->next;
   size--;
 }
 int top(){
   if(head==NULL){
      cout<<"Stack is empty!"<<endl;
      return -1;
   }
   return head->val;
 }
 void print(Node*temp){
    if(temp==NULL) return;
    print(temp->next);
    cout<<temp->val<<endl;
 }


 void display(){
   Node*temp=head;
   // while(temp!=NULL){
   //    cout<<temp->val<<" ";
   //    temp=temp->next;
   // }
   // cout<<endl;
   print(temp);
   cout<<endl;
 }
};
int main(){
   Stack st;
   cout<<st.top()<<endl;
   st.push(10);
   st.push(20);
   st.push(30);
   st.push(40);
   st.push(50);
   st.push(60);
   cout<<st.size<<endl;
   cout<<st.top()<<endl;
   st.display();
}

