#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 1e18
#define epsilon 1e-9

ll n,m;
vector<vector<pair<ll,ll>>> adj;
priority_queue<pair<ll,ll>> q;
vector<ll> dist;
vector<bool> processed;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    t=1;
    while(t--){
        cin>>n>>m;
        adj.assign(n+1, {});
        dist.assign(n+1, INF);
        processed.assign(n+1, false);
        for(ll i=0;i<m;i++){
            ll a,b,c;
            cin>>a>>b>>c;
            adj[a].push_back({b,c});
        }

        dist[1]=0;
        q.push({0,1});
        while(!q.empty()){
            ll a=q.top().second;
            q.pop();
            if(processed[a]) continue;
            processed[a]=true;
            for(auto u:adj[a]){
                ll b=u.first, w=u.second;
                if(dist[a]+w<dist[b]){
                    dist[b]=dist[a]+w;
                    q.push({-dist[b], b});
                }
            }
        }
        for(ll i=1;i<=n;i++){
            cout<<dist[i]<<" ";
        }
        cout<<"\n";
    }
}
    