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
        ll n,m;
        cin>>n>>m;
        vector<vector<ll>> adj(n+1);
        for(ll i=0;i<m;i++){
            ll u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<ll> d(n+1);
        for(ll i=1;i<=n;i++){
            d[i]=adj[i].size();
        }
        ll x=0, y=0;
        bool check=false;
        for(ll i=1;i<=n;i++){
            if(d[i]==1) continue;
            if(x==d[i]){
                check=true;
                continue;
            }
            if(x==0) x=d[i];
            else if(y==0) y=d[i];
        }
        if(y==0){
            cout<<x<<" "<<x-1<<"\n";
            continue;
        }
        if(check){
            cout<<y<<" "<<x-1<<"\n";
            continue;
        }
        cout<<x<<" "<<y-1<<"\n";
    }
}
    