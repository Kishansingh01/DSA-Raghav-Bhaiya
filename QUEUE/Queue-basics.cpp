// q.back()->means print element in the back 
// q.front()->means print element in the front
//q.size()->returns size
//q.empty()->returns true if queue is empty

// Overflow=>Happens if we implement the queue via a fixed  array or 
// the computer is out of memory

//Underflow=> Whenever the queue is empty and we try to use the function like 
//pop(),front(),back() so it will be underflow


//FIFO->First in first out(Like line)
//first go last come like a line, Push and Pop are done in opposite direction

// In stack=>Top,Pop,Push
// In queue=>Front,Pop,Push,Rear(Back)
//I will insert anything means pushing from the back and poping from the first like a line

#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    //push means i am inserting the element from the back
    //pop
    //front means print on the up/top position
    //rear means print on the down position
    //size,empty
    //back
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    q.pop(); //mtlb niklega to aage se in queue 
    cout<<q.back()<<endl;//back i am giving to the last queue
    cout<<q.front()<<endl;  //front means i am going from the first
    cout<<q.size();
   
}
