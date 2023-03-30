//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1

// Kth smallest element in an array or range of array

// arr : given array
// l : starting index of the array i.e 0
// r : ending index of the array i.e size-1
// k : find kth smallest element and return using this function 
class Solution{
    public:
   
    int kthSmallest(int a[], int l, int r, int k) {
        int maxi=*max_element(a+l,a+r+1);
        int m[maxi+1],kk=0;
        memset(m,0,sizeof(m));
        for(int i=l;i<=r;i++)
            m[a[i]]=1;
        for(int i=0;i<=maxi;i++){
            if(m[i])
                kk++;
            if(k==kk)
                return i;
        }
    }
};

//{ Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends