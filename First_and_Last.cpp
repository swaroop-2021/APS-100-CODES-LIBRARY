#include <bits/stdc++.h>
using namespace std;

#define ll long long

// https://www.codechef.com/problems/FIRSTANDLAST?tab=statement

// First and Last

// Given an array of length n,
// we can right rotate the array any number of times,
// find the max value of sum of First and Last element.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    ll a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    ll sum=a[0]+a[n-1];
        // finding the maximum sum of consecutive elements,
        //  also need to consider firsta nd last element.
	    for(int i=0;i<n-1;i++){
	        sum=max(sum,a[i]+a[i+1]);
	    }
	    cout<<sum<<"\n";
	}
	return 0;
}
