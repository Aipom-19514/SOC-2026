#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 9e18
#define epsilon 1e-9
bool f(vector<ll> x, ll c, ll d){
    ll count=1;
    ll pos=x[0];
    for(ll i=1;i<x.size();i++){
        if(x[i]>=d+pos){
            count++;
            pos=x[i];
        }
    }
    return count>=c;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        ll n,c;
        cin>>n>>c;
        vector<ll>x(n);
        for(ll i=0;i<n;i++){
            cin>>x[i];
        }
        sort(x.begin(), x.end());
        ll a=0,b=x[n-1]-x[0],ans=0;
        while(a<=b){
            ll m=(a+b)/2;
            if(f(x,c,m)){
                ans=m;
                a=m+1;
            }
            else{
                b=m-1;
            }
        }
        cout<<ans<<"\n";
    }
}
    