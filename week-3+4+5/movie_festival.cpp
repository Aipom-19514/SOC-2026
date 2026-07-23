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
        ll n;
        cin>>n; 
        vector<pair<ll,ll>> t(n);
        for(ll i=0;i<n;i++){
            cin>>t[i].second>>t[i].first;
        }
        sort(t.begin(),t.end());
        ll m=0,time=0;
        for(ll i=0;i<n;i++){
            if(t[i].second>=time) {time=t[i].first;m++;}
        }
        cout<<m<<"\n";
    }
}
    