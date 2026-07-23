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
        vector<ll> h(n),s(n);
        for(ll i=0;i<n;i++){
            cin>>h[i];
        }
        for(ll i=0;i<n;i++){
            cin>>s[i];
        }
        vector<ll> dp(x+1,0);
        for(ll i=0;i<n;i++){
            for(ll j=x;j>=h[i];j--){
                dp[j]=max(dp[j],dp[j-h[i]]+s[i]);
            }
        }
        cout<<dp[x]<<"\n";
    }
}
    