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
        ll m=1e9+7;
        cin>>n;
        vector<ll> dp(n+1,0);
        dp[0]=1;
        for(ll i=1;i<=n;i++){
            for(ll d=1;d<=6;d++){
                if(i-d>=0) dp[i]=(dp[i]+dp[i-d])%m;
            }
        }
        cout<<dp[n]<<"\n";
    }
}
    