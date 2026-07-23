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
        ll m=1e9+7;
        vector<ll> c(n);
        for(ll i=0;i<n;i++){
            cin>>c[i];
        }
        sort(c.begin(),c.end());
        vector<ll> dp(x+1,0);
        dp[0]=1;
        for(ll i=0;i<n;i++){
            for(ll j=c[i];j<=x;j++){
                dp[j]=(dp[j]+dp[j-c[i]])%m;
            }
        }
        cout<<dp[x]<<"\n";
    }
}
    