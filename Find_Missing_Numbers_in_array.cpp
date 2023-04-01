#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/description/

// Find All Numbers Missing in an Array

// Given an array having integers in the range [1, N] ,
// with some of the elements missing. 
// The task is to find the missing elements.

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& a) {
        int i = 0,n = a.size(),correct;
        while (i < n) {
            // as 0 based indexing
            correct = a[i] - 1;
            if (a[i] != a[correct]) 
                swap(a[i], a[correct]);
            else
                i++;
        }
 
        vector<int> ans;
        for (i = 0; i < n; i++) {
            if (a[i] != i + 1)
                ans.push_back(i + 1);
        }
        return ans;


        // int c,n=a.size();
        // for(int i=0;i<n;i++){
        //     c=abs(a[i]);
        //     if(a[c-1]>0)
        //         a[c-1]*=-1;
        // }
        // vector<int>v;
        // for(int i=0;i<n;i++){
        //     if(a[i]>0)
        //         v.push_back(i+1);
        // }
        // return v;


        // vector<int> v;
        // int n=nums.size();
        // int a[n+1];
        // for(int i=1;i<=n;i++){
        //     a[i]=0;
        // }
        // for(int i=1;i<=n;i++){
        //     a[nums[i-1]]=1;
        // }
        // for(int j=1;j<=n;j++)
        // {
        //     if(a[j]!=1)
        //         v.push_back(j);
        // }
        // return v;
    }
};