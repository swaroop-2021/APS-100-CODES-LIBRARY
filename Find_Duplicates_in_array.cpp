#include <bits/stdc++.h>
using namespace std;

// https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1
// https://leetcode.com/problems/find-all-duplicates-in-an-array/description/

// Find Duplicates in array

// Given an array a[] of size N which contains elements from 0 to N-1,
// you need to find all the elements occurring more than once in the given array

class Solution{
  public:
    vector<int> duplicates(int a[], int n) {
        
        // O(1) space
        
        // First check all the values that are
        // present in an array then go to that
        // values as indexes and increment by
        // the size of array
        for (int i = 0; i < n; i++) 
        {
            int index = a[i] % n;
            a[index] += n;
        }
    
        // Now check which value exists more
        // than once by dividing with the size
        // of array
        vector<int>kk;
        for (int i = 0; i < n; i++)
        {
            if ((a[i] / n) >= 2)
                kk.push_back(i);
        }
        if(kk.size()==0)
            cout<<-1;
        return kk;
        
        // For elements from 1 to n
        
        
        // vector<int> ans;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[abs(nums[i])-1]>0) nums[abs(nums[i])-1]*=-1;
        //     else ans.push_back(abs(nums[i]));
        // }
        // return ans;
        
        
        
        // vector<int>v;
        // int n=a.size()+1,temp;
        // for(int i=0;i<n-1;i++){
        //     temp=a[i]%n;
        //     a[temp-1]+=n;
        // }
        // for(int i=0;i<n-1;i++){
        //     if(a[i]/n >= 2)
        //         v.push_back(i+1);
        // }
        // return v;
        
        
        
        // int k[n];
        // memset(k, 0, sizeof(k));
        // for(int i=0;i<n;i++)
        // {
        //     // cout<<k[i]<<endl;
        //     k[a[i]]++;
        // }
        // vector<int>kk;
        // for(int i=0;i<n;i++)
        // {
        //     // cout<<k[i]<<endl;
        //     if(k[i]>1)
        //         kk.push_back(i);
        // }
        // if(kk.size()==0)
        //     cout<<-1;
        // return kk;
    }
};

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}