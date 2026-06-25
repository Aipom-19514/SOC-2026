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
        ll n,k;
        cin>>n>>k;
        vector<pair<ll,ll>> t(n);
        for(ll i=0;i<n;i++){
            cin>>t[i].second>>t[i].first;
        }
        sort(t.begin(),t.end());
        multiset<ll> s;
        for(ll i=0;i<k;i++){
            s.insert(0);
        }
        ll ans=0;
        for(ll i=0;i<n;i++){
            auto x=s.upper_bound(t[i].second);
            if(x==s.begin())continue;
            x--;
            s.erase(x);
            s.insert(t[i].first);
            ans++;
        }
        cout<<ans<<"\n";
    }
}
    