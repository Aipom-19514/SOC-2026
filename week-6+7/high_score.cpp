#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 1e18
#define epsilon 1e-9
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    t=1;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<tuple<ll,ll,ll>> edges;
        vector<ll> dist(n+1, INF);
        vector<vector<ll>> adjr(n+1);
        dist[1]=0;
        for(ll i=0;i<m;i++){
            ll a,b,c;
            cin>>a>>b>>c;
            edges.push_back({a,b,-c});
            adjr[b].push_back(a);
        }

        //reachable from n in reverse graph i.e. can reach n from it in the normal graph
        queue<ll> q;
        vector<bool>  visited(n+1,false);
        q.push(n);
        visited[n]=true;
        while(!q.empty()){
            ll v=q.front();
            q.pop();
            for(auto u:adjr[v]){
                if(!visited[u]){
                    visited[u]=true;
                    q.push(u);
                }
            }
        }

        bool check=false;
        for(ll i=1;i<=n;i++){
            for(auto e:edges){
                ll a,b,w;
                tie(a,b,w)=e;
                if(dist[a]==INF) continue;
                if(i==n&&dist[b]>dist[a]+w&&visited[b]) check=true;
                dist[b]=min(dist[b],dist[a]+w);
            }
        }
        if(check) cout<<-1<<"\n";
        else cout<<-dist[n]<<"\n";
    }
}
    