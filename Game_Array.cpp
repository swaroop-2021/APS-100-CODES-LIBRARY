#include<bits/stdc++.h>
using namespace std;
#define ll long long

string gameArray(vector<ll> a){
    ll c=1;
    for(ll i=0;i<a.size()-1;i++){
        if(a[i]<a[i+1])
            c++;
    }
    if(c%2==0)
        return "p2";
    else
        return "p1";
}

int main()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
        cin>>a[i];
    cout<<gameArray(a);
	return 0;
}