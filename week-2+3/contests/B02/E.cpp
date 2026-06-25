#include<bits\stdc++.h>
using namespace std;
#define ll long long
#define INF 9e18
#define epsilon 1e-9
vector<ll> f(vector<ll> v, ll x, ll n, ll m){
    for(int i=0;i<n;i++){
        v[i]=(v[i]+x)%m;
    }
    sort(v.begin(), v.end());
    return v;
}
bool g(vector<ll> a, vector<ll> b, ll n){
    bool c=1;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]) c=0;
    }
    return c;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    t=1;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<ll> a(n), b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        ll x;
        ll min_x=INF;
        if(g(a,b,n)) cout<<0<<"\n";
        else{
            for(int i=0;i<n;i++){
                if(b[i]<a[0]) x=(b[i]-a[0]+m)%m;
                else x=(b[i]-a[0])%m;
                vector<ll> c=f(a, x, n, m);
                if(g(c, b, n)){
                    min_x=min(min_x, x);
                }
            }
            cout<<min_x<<"\n";
        }
    }
}
    