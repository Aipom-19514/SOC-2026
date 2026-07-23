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
        vector<ll> p(n);
        for(ll i=0;i<n;i++){
            cin>>p[i];
        }
        vector<string> f(m);
        for(ll i=0;i<m;i++){
            cin>>f[i];
        }
        sort(p.begin(),p.end());
        sort(f.begin(),f.end());
        ll r=1;
        vector<ll> g;
        for(ll i=0;i<m-1;i++){
            if(f[i]!=f[i+1]){
                g.push_back(r);
                r=1;
            }
            else r++;
        }
        g.push_back(r);
        sort(g.begin(),g.end());
        ll min_sum=0, max_sum=0;
        ll l=g.size();
        for(ll i=0;i<l;i++){
            min_sum+=g[i]*p[l-1-i];
        }
        for(ll i=n-1;i>=n-l;i--){
            max_sum+=g[i-n+l]*p[i];
        }
        cout<<min_sum<<" "<<max_sum;
        cout<<"\n";
    }
}
    