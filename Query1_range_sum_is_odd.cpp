#include <bits/stdc++.h>

using namespace std;
#define ll long long

// https://codeforces.com/contest/1807/problem/D

// Odd Query
// Query Range Problem

// If we change all elements in the range al,al+1,…,ar
// of the array to k,
// will the sum of the entire array be odd?

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,m,l,r,k,sum1=0;
        cin>>n>>m;
        vector<ll>sum(n,0);
        ll a[n];
        cin>>sum[0];
        a[0]=sum[0];
        for(ll i=1;i<n;i++){
            cin>>a[i];
            sum[i]+=a[i]+sum[i-1];
        }
        for(ll i=0;i<m;i++){
            sum1=0;
            cin>>l>>r>>k;
            sum1=sum[r-1]-sum[l-1]+a[l-1];
            sum1=sum[n-1]-sum1+(k*(r-l+1));
            if(sum1%2){
                cout<<"YES\n";
            }
            else
                cout<<"NO\n";
        }
    }

    return 0;
}