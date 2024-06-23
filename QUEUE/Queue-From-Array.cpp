

#include<iostream>
#include<vector>
using namespace std;
class Queue{
    public:
    int f;//Front
    int b;//Back
    int size;
    vector<int>arr;
    Queue(int val){//Constructor
    f=0;
    b=0;
    int size=0;//Current queue size
    vector<int>v(val);
    arr=v;
    }
    void push(int val){
        if(b==arr.size()){
            cout<<"Queue is full!"<<endl ;
            return;
        }
        arr[b]=val;
        b++;
        size++;

    }
    void pop(){
        if(size==0){
            cout<<"Queue is Empty"<<endl ;
            return;
        }
            f++;
            size--;
    }
    int front(){
        if(size==0){
            cout<<"Queue is Empty!"<<endl;
            return -1;
        }
        return f;
    }
    int back(){
        if(size==0){
            cout<<"Queue is Empty!"<<endl;
            return -1;
        }
        return arr[b-1];
    }
    int size1(){
        return size;//Gives size
    }
     bool empty(){
        if(size==0) return true;
        else return false;
     }
     void display(){
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";

        }
        cout<<endl;
     }

    };


int main(){
    Queue q(5);
    //push,pop,front,back,size,empty
    q.push(10); //10
    q.push(20); // 10,20
    q.push(30); //10,20,30
    q.push(40); //10,20,30,40
    q.display();//10,20,30,40
    q.push(50); //10,20,30,40,50
    q.push(60); //Queue is full
    q.display(); //10,20,30,40,50
    q.pop(); //10,20,30,40
     q.display();//10,20,30,40
}


// Problems in array implementation of queue .

// I am making a an array in the queue form and i have pushed 5 element 
// but when i will pop elements and try to push again i am not able to 
// do that bcz of this is an array . So wastage  of the space.It also happens in 
//the case of vectors .