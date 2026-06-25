#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 9e18
#define epsilon 1e-9
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    t=1;
    while(t--){
        ll n,q;
        cin>>n>>q;
        vector<string> f(n);
        for(ll i=0;i<n;i++){
            cin>>f[i];
        }
        vector<vector<ll>> p(n+1,vector<ll>(n+1,0));
        for(ll i=1;i<n+1;i++){
            for(ll j=1;j<n+1;j++){
                p[i][j]=(f[i-1][j-1]=='*')+p[i-1][j]+p[i][j-1]-p[i-1][j-1];
            }
        }
        vector<ll>ans(q);
        for(ll i=0;i<q;i++){
            ll y1,x1,y2,x2;
            cin>>y1>>x1>>y2>>x2;
            ans[i]=p[y2][x2]-p[y1-1][x2]-p[y2][x1-1]+p[y1-1][x1-1];
        }
        for(ll i=0;i<q;i++){
            cout<<ans[i]<<"\n";
        }
    }
}
