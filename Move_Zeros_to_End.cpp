//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

// https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1
// https://leetcode.com/problems/move-zeroes/description/

// Move Zeros

// Given an array positive integers. 
// Push all the zeros of the given array to the right end of the array,
// while maitaining the order of non-zero elements.

class Solution{
public:
	void pushZerosToEnd(int a[], int n) {
	    int pivot=0;
	    for(int i=0;i<n;i++){
	        if(a[i]!=0)
	        {
	            swap(a[pivot],a[i]);
	            pivot++;
	        }
	    }
	    
    // int k=0,n=a.size();
    //     if(n==1)
    //         return;
    //     for(int i=0;i<n;i++)
    //     {
    //         if(a[i]!=0)
    //             a[k++]=a[i];
    //     }
    //     for(int i=k;i<n;i++)
    //         a[i]=0;
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends