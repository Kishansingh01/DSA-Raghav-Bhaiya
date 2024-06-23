//Given perfix=> -/*+79483 , We will traverse in reverse order

// first put all number in reverse  like as 38497 int val1=7 
// and val2=9 and traverse from left to right


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
    string s="-/*+79483";//Prefix  Operations 
 //  we need 1 stacks ,
 stack<int>val; 
 for(int i=s.length()-1;i>=0;i--){//Reverse loop
    //check if s[i] is a digit(0-9)
    if(s[i]>=48 && s[i]<=57){//Digit number
    val.push(s[i]-48);//Make string conversion and put the value
    }
    else{//s[i] it is ->*,/,+,-,
    int val1=val.top();
    val.pop();
    int val2=val.top();
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