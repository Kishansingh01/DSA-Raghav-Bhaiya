 //Leetcode 622

 class Mycircularqueue{
    public:
    int f;//Front
    int b;//Back,rear
    int s;// current Size
    int c;//capacity
    vector<int>arr;
    Mycircularqueue(int k){//K is capacity
    f=0;
    b=0;
    s=0;
    c=k;
    vector<int>v(k);
    arr=v;
    }
bool enqueue(int val){//push back
if(s==c) return false;
arr[b]=val;
b++;
if(b==c) b=0;
s++;
return true;

}
bool dequeue(){//POP front
if(s==0) return false;
f++;
if(f==c) f=0;//Important line thonk from yourself
s--;
return true;


}
int front(){
    if(s==0) return -1;
    return arr[f];

}
int rear(){
    if(s==0){
        if(b==0)  return [c-1];//Important line think yourself
        return -1;
        return arr[b-1];
    }
}
bool isEmpty(){
    if(s--0) return true;
    else return false;
}
bool isFull(){
    if(s==c) return true;
    else return false
}

 }