//Leetcode 232 .Implement queue using stack.
//By push efficient Approach


// I am solving it by using two operations and two methods one is by using push (O(n)) and one is 
// By pop(O(n)) 

class myQueue{
    public:
    stack<int>st;
    stack<int.helper;
    MyQueue(){

    }
    void push(int x){//TC=o(1)
        st.push();

    }
    int pop(){//Remove at bottom(O(n))TC
    while(st.size()>0){
        helper.push(st.top());
        st.pop();

    }
    int x=helper.top();
    helper.pop();
    while(helper.size()>0){
        st.push(helper.top());
        helper.pop();
    }
    return x;
    }
    int peek(){//front    //O(n) TC  
    //retrieve at button
    while(st.size()>0){
        helper.push(st.top());
        st.pop();

    }
    int x=helper.top();
    while(helper.size()>0){
        st.push(helper.top());
        helper.pop();
    }
    return x;

    }
    bool empty(){
        if(st.size()==0) return true;
        else return false;
    }
}



//2nd Method


class myQueue{
    public:
    stack<int>st;
    stack<int.helper;
    MyQueue(){

    }
    void push(int x){//TC=O(n)
    //Push at buttom
    if(st.size()==0){
        st.push(x);
        return;
    }
        else{
            while(st.size()>0){
                helper.push(st.top());
                st.pop();
            }
            st.push(x);//Blank the helper from stack and insert 
            while(helper.size()>0){
                st.push(helper.top());
                helper.pop();
            }
        }

    }
    int pop(){//Remove at bottom(O(1))TC
    int x=st.top();
    st.pop(){
        return x;
    }

    }
    int peek(){//front    //O(n) TC  
    //retrieve at button
    return st.top();
    }
    bool empty(){
        if(st.size()==0) return true;
        else return false;
    }
}

