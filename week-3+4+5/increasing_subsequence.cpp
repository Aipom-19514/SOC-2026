#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 9e18
#define epsilon 1e-9
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    t=1;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> x(n);
        for(ll i=0;i<n;i++){
            cin>>x[i];
        }
        vector<ll> dp;
        for(ll i=0;i<n;i++){
            ll l=0,r=dp.size();
            while(l<r){
                ll m=(r+l)/2;
                if(dp[m]<x[i]) l=m+1;
                else r=m;
            }
            if(l==dp.size()) dp.push_back(x[i]);
            else dp[l]=x[i];
        }
        cout<<dp.size()<<"\n";
    }
}
    