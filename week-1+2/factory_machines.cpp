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
        ll n,m;
        cin>>n>>m;
        vector<ll> t(n);
        for(ll i=0;i<n;i++){
            cin>>t[i];
        }
        sort(t.begin(),t.end());
        ll a=0,b=m*t[0];
        while(a<b-1){
            ll c=(a+b)/2;
            ll sum=0;
            for(ll i=0;i<n;i++){
                sum+=c/t[i];
            }
            if(sum<m) a=c;
            else b=c;
        }
        cout<<b<<"\n";
    }
}
    