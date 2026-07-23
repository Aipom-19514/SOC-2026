#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 1e18
#define epsilon 1e-9
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> mine,miner;
        for(ll i=0;i<2*n;i++){
            ll x,y;
            cin>>x>>y;
            if(x==0) miner.push_back(y*y);
            if(y==0) mine.push_back(x*x);
        }
        sort(mine.begin(),mine.end());
        sort(miner.begin(),miner.end());
        double energy=0;
        for(ll i=0;i<n;i++){
            energy+=sqrt(miner[i]+mine[i]);
        }
        cout<<fixed<<setprecision(15)<<energy<<"\n";
    }
}
    