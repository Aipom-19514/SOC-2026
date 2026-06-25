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
        ll n,x;
        cin>>n>>x;
        vector<ll> c(n);
        for(ll i=0;i<n;i++){
            cin>>c[i];
        }
        sort(c.begin(),c.end());
        vector<ll> dp(x+1,INF);
        dp[0]=0;
        for(ll i=1;i<=x;i++){
            for(ll j=0;j<n;j++){
                if(i-c[j]>=0) dp[i]=min(dp[i-c[j]]+1,dp[i]);
            }
        }
        if(dp[x]==INF) cout<<-1<<"\n";
        else cout<<dp[x]<<"\n";
    }
}
    