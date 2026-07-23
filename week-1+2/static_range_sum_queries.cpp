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
        ll n,q;
        cin>>n>>q;
        vector<ll> x(n),p(n+1);
        vector<pair<ll,ll>> v(q);
        p[0]=0;
        for(ll i=0;i<n;i++){
            cin>>x[i];
            p[i+1]=p[i]+x[i];
        }
        for(ll i=0;i<q;i++){
            cin>>v[i].first>>v[i].second;
        }
        for(ll i=0;i<q;i++){
            cout<<p[v[i].second]-p[v[i].first-1]<<"\n";
        }
    }
}
    