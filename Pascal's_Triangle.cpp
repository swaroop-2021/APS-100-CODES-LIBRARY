//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
// #define ll long long

// https://leetcode.com/problems/pascals-triangle/
// https://practice.geeksforgeeks.org/problems/pascal-triangle0652/1

// Pascal's Triangle
// Given a positive integer N,
// return the Nth row of pascal's triangle.

class Solution{
     const int mod = 1e9+7;
public:
    vector<ll> nthRowOfPascalTriangle(int n) {
        vector<vector<ll>> v(n);
        v[0].push_back(1);
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(j==0 || j==i)
                {
                    v[i].push_back(1);
                }
                else{
                    v[i].push_back((v[i-1][j]+v[i-1][j-1])%mod);
                }
            }
        }
        return v[n-1];
    }
};


//{ Driver Code Starts.


void printAns(vector<ll> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends