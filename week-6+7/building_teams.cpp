#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 1e18
#define epsilon 1e-9

ll n,m;
vector<vector<ll>> adj;
vector<bool> visited;
vector<ll> comp;

bool dfs(ll i){
    visited[i]=true;
    for(auto u: adj[i]){
        if(comp[i]==comp[u]) return false;
        if(!visited[u]){
            comp[u]=(comp[i]==1)?2:1;
            bool r=dfs(u);
            if(!r) return false;
        }
    }
    return true;
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
        comp.assign(n+1, -1);
        for(ll i=0;i<m;i++){
            ll a,b;
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        bool check=true;
        for(ll i=1;i<=n;i++){
            bool r=true;
            if(!visited[i]){
                comp[i]=1;
                r=dfs(i);
            }
            if(!r) check=false;
        }
        if(!check){
            cout<<"IMPOSSIBLE"<<"\n";
            return 0;
        }
        for(ll i=1;i<=n;i++){
            cout<<comp[i]<<" ";
        }
        cout<<"\n";
    }
}
    