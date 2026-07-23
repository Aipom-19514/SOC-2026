#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 1e18
#define epsilon 1e-9

ll n,m;
vector<vector<ll>> adj;
vector<bool> visited;

void dfs(ll v){
    visited[v]=true;
    for(auto u:adj[v]){
        if(!visited[u]) dfs(u);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    t=1;
    while(t--){
        cin>>n>>m;
        adj.assign(n+1, {});
        visited.assign(n+1, false);
        for(ll i=0;i<m;i++){
            ll u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<ll> comp;
        for(ll i=1;i<=n;i++){
            if(!visited[i]){
                comp.push_back(i);
                dfs(i);
            }
        }
        ll r=static_cast<ll>(comp.size());
        cout<<r-1<<"\n";
        for(int i=0;i<r-1;i++){
            cout<<comp[i]<<" "<<comp[i+1]<<"\n";
        }
    }
}
    