//Write  a lower bound of the numbers by linear search method 

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10]={1,2,3,5,9,11,12,14,16};
//     int n=10;
//     int x=15;
//     for(int i=0;i<=n;i++){
//         if(arr[i]>x){
//             cout<<arr[i-1];
//            break;
//         }
//     }
// }



//Write an upper  bound of the numbers by linear search method 

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10]={1,2,3,5,9,11,12,14,16};
//     int n=10;
//     int x=15;
//     for(int i=0;i<=n;i++){
//         if(arr[i]>x){
//             cout<<arr[i];
//            break;
//         }
//     }
// }




// //By using binary search for lower bound

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10]={1,2,4,5,9,15,18,21,24};
//     int n=10;
//     int x=28;
//     int lo=0;
//     int hi=n-1;
//     bool flag=false;
//     while(lo<hi){
//     int mid=lo+(hi-lo)/2;
//     if(arr[mid]==x){
//         flag=true;
//         cout<<arr[mid-1];
//         break;
//     }
//     else if(arr[mid]<x) lo=mid+1;
//     else hi=mid-1;
//     }
//     if(flag==false) cout<<arr[hi];}




//By using binary search for lower bound

#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,4,5,9,15,18,21,24};
    int n=10;
    int x=2;
    int lo=0;
    int hi=n-1;
    bool flag=false;
    while(lo<hi){
    int mid=lo+(hi-lo)/2;
    if(arr[mid]==x){
        flag=true;
        cout<<arr[mid+1];
        break;
    }
    else if(arr[mid]<x) lo=mid+1;
    else hi=mid-1;
    }
    if(flag==false) cout<<arr[lo];}




// Another a sorted array of n elements and a targrt 'x'.
// Find the first occurence of 'x' in the array.If 'x' does not 
// exist return -1.


    
    

