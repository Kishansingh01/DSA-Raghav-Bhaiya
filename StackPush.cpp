//Push element at bottom /any index.
#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>&st){
    stack<int>temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    //Putting elements back from temp to string
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();}
        cout<<endl;
    }
    void pushAtIdx(stack<int>&st,int idx,int val){//It is pass by value
        stack<int>temp;
        while(st.size()>idx){//i am inserting at index
            temp.push(st.top());
            st.pop();
        }//This is for pushing elements on the buttom 
        st.push(val);
        while(temp.size()>0){
            st.push(temp.top());
            temp.pop();
        }
    }
     void pushAtBottom(stack<int>&st,int val){//It is pass by value
        stack<int>temp;
        while(st.size()>0){
            temp.push(st.top());
            st.pop();
        }//This is for pushing elements on the buttom 
        st.push(val);
        while(temp.size()>0){
            st.push(temp.top());
            temp.pop();
        }}
    int main(){
        stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    cout<<endl;
    pushAtBottom(st,80);//It will be pass by value.
   print(st);
   pushAtIdx(st,2,110);//I am inserting it in an index
   print(st);
    
}