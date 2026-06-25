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
        vector<tuple<ll,ll,ll>> v(n);
        for(ll i=0;i<n;i++){
            ll s,e,p;
            cin>>s>>e>>p;
            v[i]={e,s,p};
        }
        sort(v.begin(),v.end());
        vector<ll> dp(n+1,0);
        for(ll i=1;i<=n;i++){
            ll s=get<1>(v[i-1]);
            ll p=get<2>(v[i-1]);
            ll j=lower_bound(v.begin(),v.end(),tuple<ll,ll,ll>{s,0,0})-v.begin();
            dp[i]=max(dp[i-1],dp[j]+p);
        }
        cout<<dp[n]<<"\n";

    }
}
    