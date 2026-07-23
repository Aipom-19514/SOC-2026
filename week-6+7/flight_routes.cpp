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
        ll n,m,k;
        cin>>n>>m>>k;
        vector<vector<pair<ll,ll>>> adj(n+1);
        priority_queue<pair<ll,ll>> q;
        vector<ll> count(n+1,0);
        vector<ll> answer;
        for(ll i=0;i<m;i++){
            ll a,b,c;
            cin>>a>>b>>c;
            adj[a].push_back({b,c});
        }

        q.push({0,1});
        while(!q.empty()){
            ll a=q.top().second;
            ll d=q.top().first;
            q.pop();
            if(count[a]==k) continue;
            count[a]++;
            if(a==n) answer.push_back(-d);
            for(auto u:adj[a]){
                ll b=u.first, w=u.second;
                q.push({-w+d, b});
            }
        }
        for(ll i=0;i<k;i++){
            cout<<answer[i]<<" ";
        }
        cout<<"\n";
    }
}
    