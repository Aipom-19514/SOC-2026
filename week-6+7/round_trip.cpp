#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 1e18
#define epsilon 1e-9

ll n,m;
vector<vector<ll>> adj;
vector<bool> visited;
vector<ll> parent;
ll s=-1,e=-1;

bool dfs(ll v, ll p){
    visited[v]=true;
    parent[v]=p;

    for(auto u:adj[v]){
        if(u==p) continue;
        if(visited[u]){
            s=u;
            e=v;
            return true;
        }
        if(dfs(u,v)) return true;
    }
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    t=1;
    while(t--){
        cin>>n>>m;
        adj.assign(n+1,{});
        visited.assign(n+1,false);
        parent.assign(n+1,-1);
        for(ll i=0;i<m;i++){
            ll a,b;
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        for(ll i=1;i<=n;i++){
            if(!visited[i]){
                if(dfs(i,-1)) break;
            }
        }
        if(s==-1){
            cout<<"IMPOSSIBLE"<<"\n";
            return 0;
        }

        vector<ll> cycle;
        cycle.push_back(s);
        ll v=e;
        while(s!=v){
            cycle.push_back(v);
            v=parent[v];
        }
        cycle.push_back(s);
        reverse(cycle.begin(), cycle.end());
        cout<<cycle.size()<<"\n";
        for(size_t i=0;i<cycle.size();i++){
            cout<<cycle[i]<<" ";
        }
        cout<<"\n";
    }
}
    