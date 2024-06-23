//In stack size is unlimited
  
#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>st){
    stack<int>temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    //Putting eements back from temp to string
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();}
    }
    int main(){
        stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    stack<int>gt;
    stack<int>rt;
    //empty st into gt
    while(st.size()>0){
        gt.push(st.top());
        st.pop();
    }
    //Empty gt into rt
    while(gt.size()>0){
        rt.push(gt.top());
        gt.pop();
    }
//empty rt into st
while(rt.size()>0){
    st.push(rt.top());
    rt.pop();
}
cout<<endl;
print(st);
}








//Stack means LIFO/FILO  last in first out mtlb jo baad me aayega wo pahle jayega
//and if i want to delete from the middle i will remove from the last.

//st.top()->Returns the value at the top
// st.push(val)->
// st.pop()->
//st.size()->Returns size
//Up all three have time/Space complexity is O(1).

//If add,delete,get at a given idx all three have time complexity O(n).

// STL(Standard tempelate library)
// vector<int>v; We have to write stack like vector.
// stack<int>st;
// st.push(val);
// st.pop()
// st.size()
// st.empty()


// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     stack<int>st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);


   // cout<<st.size()<<endl;
   // st.pop();//    Here i am watching the size
    //cout<<st.size()<<endl;
                              //
    //cout<<st.top();
    // while(st.size()>0){
    //     cout<<st.top()<<" ";//Here i am printing stack
    //     st.pop();//It will print in a reversed order,And the stack got empty bcz i am doing pop().
    // }


   // To Remove Upper problem we have to store it in the temp So we will 
   //use extra stack

//    stack<int>temp;
//    while(st.size()>0){
//     temp.push(st.top());
//     st.pop();}

//    //Putting elements back from temp to stack
//    while(temp.size()>0){
//     cout<<temp.top()<<" ";
//     st.push(temp.top());
//     temp.pop();
//    }
//    cout<<endl<<st.top();}







