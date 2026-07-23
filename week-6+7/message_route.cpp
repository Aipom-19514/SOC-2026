#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 1e18
#define epsilon 1e-9

ll n,m;
queue<ll> q;
vector<vector<ll>> adj;
vector<bool> visited;
vector<ll> parent;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    t=1;
    while(t--){
        cin>>n>>m;
        adj.assign(n+1, {});
        visited.assign(n+1, false);
        parent.assign(n+1, -1);
        for(ll i=0;i<m;i++){
            ll a,b;
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        q.push(1);
        visited[1]=true;
        while(!q.empty()){
            ll s=q.front();
            q.pop();

            for(auto u:adj[s]){
                if(!visited[u]){
                    parent[u]=s;
                    visited[u]=true;
                    q.push(u);
                }
            }
        }
        
        if(!visited[n]){
            cout<<"IMPOSSIBLE"<<"\n";
            return 0;
        }
        ll s=n;
        vector<ll> path;
        while(s!=1){
            path.push_back(s);
            s=parent[s];
        }
        path.push_back(1);
        reverse(path.begin(), path.end());
        ll r=static_cast<ll>(path.size());
        cout<<r<<"\n";
        for(ll i=0;i<r;i++){
            cout<<path[i]<<" ";
        }
        cout<<"\n";
    }
}
    