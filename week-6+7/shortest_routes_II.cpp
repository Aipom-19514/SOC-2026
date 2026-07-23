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
        ll n,m,q;
        cin>>n>>m>>q;
        ll dist[n+1][n+1];
        ll adj[n+1][n+1];
        for(ll i=1;i<=n;i++){
            for(ll j=1;j<=n;j++){
                adj[i][j]=0;
            }
        }
        for(ll i=0;i<m;i++){
            ll a,b,c;
            cin>>a>>b>>c;
            if(adj[a][b]==0||adj[a][b]>c){
                adj[a][b]=c;
                adj[b][a]=c;
            }
        }

        for(ll i=1;i<=n;i++){
            for(ll j=1;j<=n;j++){
                if(i==j) dist[i][j]=0;
                else if(adj[i][j]) dist[i][j]=adj[i][j];
                else dist[i][j]=INF;
            }
        }
        for(ll k=1;k<=n;k++){
            for(ll i=1;i<=n;i++){
                for(ll j=1;j<=n;j++){
                    dist[i][j]=min(dist[i][j], dist[i][k]+dist[k][j]);
                }
            }
        }
        for(ll i=0;i<q;i++){
            ll a,b;
            cin>>a>>b;
            if(dist[a][b]!=INF) cout<<dist[a][b]<<"\n";
            else cout<<-1<<"\n";
        }
    }
}
    