//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/longest-increasing-subsequence-1587115620/1
// https://leetcode.com/problems/longest-increasing-subsequence/

// Longest Increasing Subsequence
// Given an array of integers, 
// find the length of the longest (strictly) 
// increasing subsequence from the given array.

class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
        int LIS[n];
        for(int i=0;i<n;i++)
            LIS[i]=1;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(a[i]>a[j] && (LIS[j]+1)>LIS[i])
                    LIS[i]=LIS[j]+1;
            }
        }
        sort(LIS,LIS+n);
        return LIS[n-1];
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends