#include<bits/stdc++.h>
using namespace std;

//Method 1
int BinarySearch(int arr[],int n,int target)
{
    int mid=arr[int(n/2)] , beg=arr[0] , end=arr[n];
    if(mid==target)
    return int(n/2);
    else if(mid>target)
    {
        for(int i=0;i<int(n/2);i++)
        {
            if(arr[i]==target)
            return i;
        }
    }
    else if(mid<target)
    {
        for(int i=int(n/2);i<n;i++)
        {
            if(arr[i]==target)
            return i;
        }
    }
}

//Method 2
// int BinarySearch(int arr[],int m,int n,int target)
// {
//     int mid=arr[m+(int((n-m)/2))] , beg=arr[m] , end=arr[n-1];
//     if(mid==target)
//     return int(m+(int((n-m)/2)));
//     else if(mid<target)
//     BinarySearch(arr,m+(int((n-m)/2))+1,n,target);
//     else if(mid>target)
//     BinarySearch(arr,m,m+(int((n-m)/2))-1,target);
// }


int main()
{
    int n,target;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>target;
    //Method 1
    cout<<BinarySearch(arr,n,target);
    // Method 2
    // cout<<BinarySearch(arr,0,n,target);
}