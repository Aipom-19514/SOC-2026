#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 1e18
#define epsilon 1e-9

vector<bool> visited;
vector<vector<ll>> adj;
vector<bool> truth;
vector<ll> leaf;

void dfs(ll v, ll p){
     if(adj[v].size()==1&&v!=1){
        leaf[v]=1;
        return;
    }
    leaf[v]=0;
    for(auto u:adj[v]){
        if(u!=p){
            dfs(u,v);
            leaf[v]+=leaf[u];
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        visited.assign(n+1,false);
        adj.assign(n+1, {});
        truth.assign(n+1, false);
        leaf.assign(n+1,0);
        for(ll i=0;i<n-1;i++){
            ll u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        ll q;
        cin>>q;
        vector<ll> x(q),y(q);
        for(ll i=0;i<q;i++){
            cin>>x[i]>>y[i];
        }
        dfs(1,0);
        for(ll i=0;i<q;i++){
            cout<<leaf[x[i]]*leaf[y[i]]<<"\n";
        }
    }
}
    