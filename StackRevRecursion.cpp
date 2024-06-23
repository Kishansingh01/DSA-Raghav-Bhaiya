//Display a stack using recursion in reverse

// #include<iostream>
// #include<stack>
// using namespace std;
// void displayRev(stack<int>&st){
//     if(st.size()==0) return;//base case
//     int x=st.top();
//     cout<<x<<" ";
//     st.pop();
//     displayRev(st);
//     st.push(x);   //Time complexity=O(n)
// }
// int main(){
//     stack<int>st; //This is for the reverse
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(40);
//     st.push(60);
//     displayRev(st);}



#include<iostream>
#include<stack>
using namespace std;
void display(stack<int>&st){
    if(st.size()==0) return;//base case
    int x=st.top();
    st.pop();
    display(st);
       cout<<x<<" ";
    st.push(x);   //Time complexity=O(n)
}
void reverse(stack<int>& st){
    if(st.size()==1) return;
    int x=st.top();
    st.pop();
    reverse(st);
    pushAtBottom(st,x);
    }
void pushAtBottom(stack<int>&st,int val){
    if(st.size()==0){
       st.push(val);
            return;
        }
void reverse(stack<int>& st){
    if(st.size()==1) return;
    int x=st.top();
    st.pop();
    reverse(st);
    pushAtBottom(st,x);
}
}
int main(){ 
    stack<int>st; //This is for the stack
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(40);
    st.push(60);
    display(st);
    //pushAtBottom(st,-10);
    cout<<endl;
    reverse(st);
    display(st);    
    
    }

//Something i wrong in reversing a stack in recursion method