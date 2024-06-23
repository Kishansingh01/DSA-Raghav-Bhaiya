//Means in postfix i am solving expressions where i may no need
//of priority 
//There is no bracket in postfix and prefix

 
#include<iostream>
#include<stack>
using namespace std;
int solve(int val1,int val2,int ch){
    if(ch=='+') return val1+val2;
    if(ch=='-') return val1-val2;
    if(ch=='*') return val1*val2;
      else  return val1/val2;
}

int main(){
    string s="79+4*8/3-";//Infix Operations 
 //  we need two stacks ,1 for vals, 1 for operations 
 stack<int>val; 
 for(int i=0;i<s.length();i++){
    //check if s[i] is a digit(0-9)
    if(s[i]>=48 && s[i]<=57){//Digit number
    val.push(s[i]-48);//Make string conversion and put the value
    }
    else{//s[i] it is ->*,/,+,-,
    int val2=val.top();
    val.pop();
    int val1=val.top();
    val.pop();
    int ans=solve(val1,val2,s[i]);
    val.push(ans);
    }
    }
    
   
//The operators stack can have values.
//so,make it empty
cout<<val.top()<<endl;
cout<<(7+9)*4/8-3;// this is in a infix form
}