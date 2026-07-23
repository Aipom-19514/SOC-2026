#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 1e18
#define epsilon 1e-9

ll n,m;
vector<vector<pair<ll,ll>>> adj;
priority_queue<pair<ll,ll>> q;
vector<ll> dist;
vector<ll> dist2;
vector<bool> processed;
vector<bool> processed2;

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
        processed2.assign(n+1, false);
        dist2.assign(n+1, INF);
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

        dist2[1]=0;
        q.push({0,1});
        while(!q.empty()){
            ll a=q.top().second;
            q.pop();
            if(processed2[a]) continue;
            processed2[a]=true;
            for(auto u:adj[a]){
                ll b=u.first, w=u.second;
                if(min(dist2[a]+w,dist[a]+w/2)<dist2[b]){
                    dist2[b]=min(dist2[a]+w,dist[a]+w/2);
                    q.push({-dist2[b], b});
                }
            }
        }

        cout<<dist2[n]<<"\n";
    }
}
    