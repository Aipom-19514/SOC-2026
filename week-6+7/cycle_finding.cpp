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
        //create a fake node that is adjacent to all nodes with edge weight 0
        vector<ll> dist(n+1,0);
        vector<ll> parent(n+1,-1);
        for(ll i=0;i<m;i++){
            ll a,b,c;
            cin>>a>>b>>c;
            edges.push_back({a,b,c});
        }
        
        ll c=-1;
        for(ll i=1;i<=n;i++){
            for(auto e:edges){
                ll a,b,w;
                tie(a,b,w)=e;
                if(dist[a]==INF) continue;
                if(dist[a]+w<dist[b]){
                    dist[b]=dist[a]+w;
                    parent[b]=a;
                    if(i==n) c=b;
                }
            }
        }

        if(c==-1){
            cout<<"NO\n";
            return 0;
        }
        cout<<"YES\n";
        vector<ll> path;
        ll i1,j1;
        for(ll i=1;i<=n+1;i++){
            path.push_back(c);
            c=parent[c];
            ll r=path.size();
            for(ll i=0;i<r-1;i++){
                if(path[i]==path[r-1]){
                    i1=i;
                    j1=r-1;
                }
            }
        }
        for(ll i=j1;i>=i1;i--){
            cout<<path[i]<<" ";
        }
        cout<<"\n";
    }
}
    