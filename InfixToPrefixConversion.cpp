//Infix to prefix conversion
//Note:-Infix me bracket hote hai,Prefix,Postfix me nhi hote hai
//In prefix i am appending problem not solving it

//Str=(7+9)*4/8-3
//+79*4/8-3
//*=794/8-3
//  /*+7948-3
//  -1*+79483

#include<iostream>
#include<stack>
using namespace std;
int priority(char ch){
    if(ch=='+'|| ch=='-') return 1;
    else return 2;//Means * or / any of them.
}
string solve(string val1,string val2,char ch){
  //We have to store prefix in the ans 
  //prefix is -> op v1 v2  
  string s="";//i am making empty string
  s.push_back(ch);
  s+=val1;
  s+=val2;
  return s;

}


int main(){
    string s="(7+9)*4/8-3";//Infix Operations 
 //  we need two stacks ,1 for vals, 1 for operations 
 stack<string>val;
 stack<char>oper; 
 for(int i=0;i<s.length();i++){
    //check if s[i] is a digit(0-9)
    if(s[i]>=48 && s[i]<=57){//Digit number
    val.push(to_string(s[i]-48));//Make string conversion and put the value


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
        string val2=val.top(); //means up value
        val.pop();
        string val1=val.top();//means down value
        val.pop();
        string ans=solve(val1,val2,ch);
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
        string val2=val.top(); //means up value
        val.pop();
        string val1=val.top();//means down value
        val.pop();
        string ans=solve(val1,val2,ch);
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
    string val2=val.top();
    val.pop();
     string val1=val.top();
    val.pop();
    string ans=solve(val1,val2,ch);
    val.push(ans);
}
cout<<val.top()<<endl;
cout<<(7+9)*4/8-3;
}