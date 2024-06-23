//Change prefix to postfix

#include<iostream>
#include<stack>
using namespace std;
string solve(string val1,string val2,int ch){
   //Prefix to postfix
   //postfix is:v1 v2  op
   string s="";
   s+=val1;
   s+=val2;
    s.push_back(ch); //Only change is here
   return s;

}

int main(){
    string s="-/*+79483";//Prefix  Operations 
 //  we need 1 stacks ,
 stack<string>val; 
 for(int i=s.length()-1;i>=0;i--){//Reverse loop
    //check if s[i] is a digit(0-9)
    if(s[i]>=48 && s[i]<=57){//Digit number
    val.push(to_string(s[i]-48));//Make string conversion and put the value
    }
    else{//s[i] it is ->*,/,+,-,
    string val1=val.top();
    val.pop();
    string val2=val.top();
    val.pop();
    string ans=solve(val1,val2,s[i]);
    val.push(ans);
    }
    }
//The operators stack can have values.
//so,make it empty
cout<<val.top()<<endl;
cout<<(7+9)*4/8-3;// this is in a infix form
}