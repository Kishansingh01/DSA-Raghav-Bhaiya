//Here i am dealing with strings
// Given postfix=79+4*8/3-
// Step 1: Convert the postfix expression to infix expression
//   7+9*4/8
//   7+9*4/8-3 

#include<iostream>
#include<stack>
using namespace std;

string solve(string val1,string val2,int ch){
    string s="";
    s+=val1;
    s.push_back(ch);
    s+=val2;
    return s;
}

int main(){
    string s="79+4*8/3-";//Infix Operations 
 //  we need two stacks ,1 for vals, 1 for operations 
 stack<string>val; 
 for(int i=0;i<s.length();i++){
    //check if s[i] is a digit(0-9)
    if(s[i]>=48 && s[i]<=57){//Digit number
    val.push(to_string(s[i]-48));//Make string 
    }
    else{//s[i] it is ->*,/,+,-,
    string val2=val.top();
    val.pop();
    string val1=val.top();
    val.pop();
    string ans=solve(val1,val2,s[i]);
    val.push(ans);
    }
    }
    
   
//The operators stack can have values.
//so,make it empty
cout<<val.top()<<endl;
cout<<"7+9*4/8-3";// this is in a infix form
}
