//Str=(2+6)*4/8-3

// I will go from left to right in bracket i will solve first  and if first come multiply or divide
// then i will solve that first then go to add and subtract from left to right 
// its after i will deal first who came first in both of addition and subtraction

#include<iostream>
#include<stack>
using namespace std;
int priority(char ch){
    if(ch=='+'|| ch=='-') return 1;
    else return 2;//Means * or / any of them.
}
int solve(int val1,int val2,int ch){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else return val1/val2;
}
int main(){
    string s="(7+9)*4/8-3";//Infix Operations 
 //  we need two stacks ,1 for vals, 1 for operations 
 stack<int>val;
 stack<char>oper; 
 for(int i=0;i<s.length();i++){
    //check if s[i] is a digit(0-9)
    if(s[i]>=48 && s[i]<=57){//Digit number
    val.push(s[i]-48);//Character minus integer it will gives actual values


    }
    else{//s[i] it is ->*,/,+,-,(,)
    if(oper.size()==0) oper.push(s[i]);
    else if(s[i]=='(') oper.push(s[i]);
   else if(oper.top()=='(') oper.push(s[i]);
   else if(s[i]==')'){
    while(oper.top()!='('){
        //work
         char ch=oper.top();
        oper.pop();
        int val2=val.top(); //means up value
        val.pop();
        int val1=val.top();//means down value
        val.pop();
        int ans=solve(val1,val2,ch);
        val.push(ans);

    }
    oper.pop();//Opening bracket ko uda diya
   }
     else if(priority(s[i])>priority(oper.top())) oper.push(s[i]);
    else{//priority(s[i])>priority(op.top()))
     while(oper.size()>0 && priority(s[i])<=priority(oper.top())){
        //I have to do val1 opera val2
        char ch=oper.top();
        oper.pop();
        int val2=val.top(); //means up value
        val.pop();
        int val1=val.top();//means down value
        val.pop();
        int ans=solve(val1,val2,ch);
        val.push(ans);

     }
     oper.push(s[i]);

    }

    }
 }
//The operators stack can have values.
//so,make it empty
while(oper.size()>0){
    // Do work
    char ch=oper.top();
    oper.pop();
    int val2=val.top();
    val.pop();
    int val1=val.top();
    val.pop();
    int ans=solve(val1,val2,ch);
    val.push(ans);
}
cout<<val.top()<<endl;
cout<<(7+9)*4/8-3;
}