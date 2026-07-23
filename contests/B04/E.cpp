#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 1e18
#define epsilon 1e-9
struct pair_hash {
    size_t operator()(const pair<ll, ll>& p) const {
        return hash<ll>()(p.first) ^ (hash<ll>()(p.second) << 1);
    }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        vector<ll> pref(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(i>0) pref[i]=pref[i-1]+a[i];
            else pref[i]=a[i];
        }
        unordered_map<pair<ll,ll>,ll, pair_hash> m;
        vector<ll> zero;
        ll ans=0;
        ll c=0;
        for(ll i=0;i<n;i++){
            if(a[i]==0){
                zero.push_back(i);
                c++;
                m[{pref[i],c}]++;
                continue;
            }
            m[{pref[i],c}]++;
        }
        ll M=0;
        c=0;
        for(ll i=0;i<=n;i++){
            if(a[i]==0||i==n){
                c++;
                ans+=M;
                M=-INF;
                if(i==n) break;
            }
            if(c>0&&M<m[{pref[i],c}]){
                M=m[{pref[i],c}];
            }
            if(c==0&&pref[i]==0){
                M++;
            }
        }
        cout<<ans<<"\n";
    }
}
    