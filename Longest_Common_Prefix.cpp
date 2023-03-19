#include<bits/stdc++.h>
using namespace std;

// https://practice.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1
// https://leetcode.com/problems/longest-common-prefix/description/
// Longest Common Prefix
// Given a array of N strings, 
// find the longest common prefix among all strings present in the array.

class Solution{
  public:
    
    string longestCommonPrefix (string a[], int n)
    {
        if(n==0)
            return "";
        string s=a[0];
        int len=s.size(),i,j,temp=0;
        for(i=1;i<n && len;i++){
            temp=len;
            if(temp>a[i].size())
                temp=a[i].size();
            for(j=0;j<temp;j++){
                if(s[j]!=a[i][j])
                    break;
            }
            if(j!=len){
               len=j;
            }
        }
        if(len==0)
            return "-1";
        return s.substr(0,len);
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// } Driver Code Ends