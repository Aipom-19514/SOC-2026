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
        vector<ll> a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i]; 
        }
        ll e=0;
        ll ans=0;
        ll sum=0;
        for(ll i=0;i<n;i++){
            if(a[i]>=0){
                sum+=a[i]; 
                continue;
            }
            if(sum+e+a[i]<0){
                ans-=a[i]+e+sum;
                e=0;
            }
            if(a[i]+sum+e>=0){
                e+=sum+a[i];
            }
            sum=0;
        }
        cout<<ans<<"\n";
    }
}
    