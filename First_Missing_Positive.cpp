#include<bits/stdc++.h>
using namespace std;

// https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1
// https://leetcode.com/problems/first-missing-positive/description/

// First Missing Positive

// Given an unsorted integer array,
// return the smallest missing positive integer.

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int a[], int n) 
    { 
        for(int i=0;i<n;i++){
            while(a[i]>0 && a[i]<=n && a[i]!=a[a[i]-1])
                swap(a[i],a[a[i]-1]);
        }
        for(int i=0;i<n;i++){
            if(a[i]!=(i+1))
                return i+1;
        }
        return n+1;


        // vector<bool>v(n,false);
        // for(int i=0;i<n;i++){
        //     if(a[i]>0 && a[i]<=n)
        //         v[a[i]-1]=true;
        // }
        // for(int i=0;i<n;i++){
        //     if(v[i]==false)
        //         return i+1; 
        // }
        // return n+1;
    } 
};

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
}