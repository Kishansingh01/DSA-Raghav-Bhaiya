// Balanced Bracket Questions (()()())

// #include<iostream>
// #include<stack>
// using namespace std;
// bool isBalanced(string s){
//     if(s.length()%2!=0) return false;
//     stack<char>st;
//     for(int i=0;i<s.length();i++){
//         if(s[i]=='(') st.push(s[i]);
//         else{if(st.size()==0) return false;
//         else st.pop();
//         }
//     }
//     if(st.size()==0) return true;
//     else return false;
// }
// int main(){
//     string s=" ()()()";
//     cout<<isBalanced(s);
// }




//To remove consecutive Duplicates in a string

// // #include<iostream>
// // #include<stack>
// // using namespace std;
// // string removeDuplicates(string s){
// //     stack<char>st;
// //     st.push(s[0]);
// //     for(int i=0;i<s.length();i++){
// //         if(s[i]!=st.top()) st.push(s[i]);
// //     }
// //     s="";
// //     while(st.size()>0){
// //         s+=st.top();
// //         st.pop();
// //     }
// //     reverse(s.begin(),s.end());//In doing the reverse some error is coming
// //     return s;
// // }
// //   int main(){
// //     string s="aabbbcccdeeff";
// //     cout<<s<<endl;
// //     s=removeDuplicates(s);
// //     cout<<s<<endl;
// //   }




//   // Question 3... Next Greater Element using array but wrost case 
//   //and time complexity is O(n*n) SC=O(1)

//     // #include<iostream>
//     // #include<stack>
//     // using namespace std;
//     // int main(){
//     //     int arr[]={3,2,1,4,5,6};
//     //     int n=sizeof(arr)/4;
//     //     for(int i=0;i<n;i++){
//     //         cout<<arr[i]<<" ";
//     //     }
//     //     cout<<endl;
//     //     int nge(n);
//     //     for(int i=0;i<n;i++){
//     //         nge[i]=-1;
//     //     for(int j=i+1;j<n;j++){
//     //         if(arr[j]>arr[i]){
//     //             nge[i]=arr[j];
//     //             break;
//     //         }
//     //     }           WROST METHOD
//     // }
//     // for(int i=0;i<n;i++){
//     //     cout<<nge[i]<<" ";
//     // }
    // cout<<endl;}




//    // other method 

//    #include<iostream>
//    #include<stack>
//    using namespace std;
//    int main()
// {
//     int arr[]={1,2,3,4,4,55,65,6};
//     int n=sizeof(arr)/4;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//   //Next greater element array
//     int nge[n];//Here i am taking index
// //using a stack:POP,ans,push and reverse traverse
// //   SC=O(n)
// // ,TC=O(n)
// stack<int>st;
// nge[n-1]=-1;
// st.push(arr[n-1]);
// for(int i=n-2;i>=0;i--){
// //pop all the elements smaller than arr[i]
//    while(st.size()>0 && st.top()<=arr[i]){
//     st.pop();
//    }
//  //  mark the answer in nge array
//    if(st.size()==0) nge[i]=-1;
//    else nge[i]=st.top();
//    //Push the arr[i];
//    st.push(arr[i]);
//      //   
// }
// for(int i=0;i<n;i++){
//     cout<<nge[i]<<" ";
// }
// }



//Question 3.Previous greater element

//   #include<iostream>
//    #include<stack>
//    using namespace std;
//    int main()
// {
//     int arr[]={21,42,53,24,44,55,65,61};
//     int n=sizeof(arr)/4;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//   //Previous greater element array
//     int pge[n];//Here i am taking index
// //using a stack:POP,ans,push and forward traverse
// //   SC=O(n)
// // ,TC=O(n)
// stack<int>st;
// pge[0]=-1;
// st.push(arr[0]);
// for(int i=1;i<n;i++){
//pop all the elements smaller than arr[i]
//    while(st.size()>0 && st.top()<=arr[i]){
//     st.pop();
//    }
//  //  mark the answer in nge array
//    if(st.size()==0) pge[i]=-1;
//    else pge[i]=st.top();
//    //Push the arr[i];
//    st.push(arr[i]);
//      //   
// }
// for(int i=0;i<n;i++){
//     cout<<pge[i]<<" ";
// }
// }





//Question -> 4 (Leetcode=1994)

class Solution{
    public:
    vector<int>canSeePersonsCount(vector<int>&arr){
        int n=arr.size();
        vector<int>ans(n,0);
        stack<int>st;
        st.push(arr[n-1]);
        ans[n-1]=0;
        for(int i=n-2;i>=0;i--){
            int count=0;
            //Pop with count
            while(st.size()>0 && arr[i]>st.top()){
                st.pop();
                count++;
            }
            if(st.size()!=0) count++;
            ans[i]=count;
            //push
            st.push(arr[i]);
        }
        return ans;
    }};
}















