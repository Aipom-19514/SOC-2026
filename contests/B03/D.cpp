#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 1e18
#define epsilon 1e-9
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll dp[n];
        dp[n-1]=1;
        for(ll i=n-2;i>=0;i--){
            dp[i]=1+dp[i+1];
            if(i+a[i]+1==n) dp[i]=0;
            else if(i+a[i]+1<n) dp[i]=min(dp[i],dp[i+a[i]+1]);
        }
        cout<<dp[0]<<"\n";
    }
}
    