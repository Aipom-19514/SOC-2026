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
        ll k;
        cin>>k;
        vector<vector<ll>> a(k),b(k);
        vector<ll> n(k);
        for(ll i=0;i<k;i++){
            cin>>n[i];
            ll sum=0;
            for(ll j=0;j<n[i];j++){
                ll x;
                cin>>x;
                a[i].push_back(x);
                sum+=x;
            }
            for(ll j=0;j<n[i];j++){
                b[i].push_back(sum-a[i][j]);
            }
        }

        unordered_map<ll, pair<ll,ll>> p;
        ll ans_i,ans_x,ans_j,ans_y;
        bool check=false;
        for(ll i=0;i<k;i++){
            for(ll j=0;j<n[i];j++){
                ll x=b[i][j];
                if(p.count(x)&&p[x].first!=i){
                    check=true;
                    ans_i=p[x].first+1;
                    ans_j=i+1;
                    ans_x=p[x].second+1;
                    ans_y=j+1;
                }
                if(!p.count(x)) p[x]={i,j};
            }
        }
        if(!check){
            cout<<"NO\n";
            continue;
        }
        else{
            cout<<"YES\n";
            cout<<ans_i<<" "<<ans_x<<"\n";
            cout<<ans_j<<" "<<ans_y<<"\n";
        }
    }
}
    