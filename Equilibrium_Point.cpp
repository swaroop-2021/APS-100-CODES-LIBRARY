//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1
// https://leetcode.com/problems/find-pivot-index/description/

// Equilibrium Point

// Sliding Window
// Function to find equilibrium point in the array.
// a: input array
// n: size of array

class Solution{
    public:
    int equilibriumPoint(long long a[], int n) {
        long long rsum=0;
        for(int i=1;i<n;i++){
            rsum+=a[i];
        }
        long long lsum=0;
        if(rsum==0 || n==1)
            return 1;
        for(int i=1;i<n;i++){
            lsum+=a[i-1];
            rsum-=a[i];
            if(lsum==rsum){
                return i+1;
            }
        }
        return -1;
        
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends