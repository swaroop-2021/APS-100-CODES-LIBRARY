//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int a[], int n){
        long long sum=0,tsum=0,nt=INT_MIN,ct=0;
        for(int i=0;i<n;i++){
            if(a[i]<0){
                if(a[i]>nt)
                    nt=a[i];
                ct++;
            }
            tsum+=a[i];
            if(tsum<0)
                tsum=0;
            if(tsum>sum)
                sum=tsum;
        }
        if(ct==n)
            return nt;
        return sum;
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

// } Driver Code Ends