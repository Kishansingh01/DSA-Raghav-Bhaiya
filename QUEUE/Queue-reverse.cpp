// In stack i was doing like keeping another box to store is same happens in 
// queue also but in stack time and space complexity is both O(n) 
// but in queue time complexity is O(n) but space com is O(1).

// pushing=back
// popping=front

#include<iostream>
#include<queue>
using namespace std;
void display(queue<int>&q){
    int n=q.size();
    for(int i=1;i<=n;i++){
        int x =q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
       cout<<endl;
}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    q.pop(); // Yea this is the reverse order in queue
    display(q);
}
