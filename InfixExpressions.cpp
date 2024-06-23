//INFIX= V1 op V2    means operators between the values
//PREFIX= op V1 V2   means operators before the values
//POSTFIX= V1 V2 op  means operators after the values

// Infix => 2+6
// Prefix => +26
// postfix => 26+

//Infix

// Like as i have given an expression as a string format.

// str=" 2+6*4/8-3 ",So i will make two stacks where 
// one stack will store  integer value as an integer and another 
// stack will store operators value as a character

// Division,Multiplication > Addition,Subtraction

//  D,M > A,S ->If A,S or D,M either of them then go from left to right.

//  2+6*4/8-3. Here first number 2 has come. So,if any number 
//  will come i will directly push into the value integer part,
//  its after + operant is coming so, As we are going from left to 
//  right so,we will push + into the operator stack.Its after 6 is coming 
//  so i wll push 6 into the value part its after * is coming. So, i will push * 
//  into the operator stack but as we know that * priority is greater than + in stack operator value.
//  so, it * will up from the + operator ,and we choose two value from the up 
//  and solve it by making * 

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
    string s="2+6*4/8-3";//Infix Operations 
 //  we need two stacks ,1 for vals, 1 for operations 
 stack<int>val;
 stack<char>oper; 
 for(int i=0;i<s.length();i++){
    //check if s[i] is a digit(0-9)
    if(s[i]>=48 && s[i]<=57){//Digit number
    val.push(s[i]-48);//Character minus integer it will gives actual values


    }
    else{//s[i] it is ->*,/,+,-
    if(oper.size()==0 || priority(s[i])>priority(oper.top()))
    oper.push(s[i]);
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
cout<<2+6*4/8-3;
}



