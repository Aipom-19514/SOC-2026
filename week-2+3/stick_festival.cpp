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
        vector<ll> l(n);
        for(ll i=0;i<n;i++){
            cin>>l[i];
        }
        sort(l.begin(),l.end());
        ll ans;
        if(n%2==0) ans=l[n/2-1];
        else ans=l[n/2];
        ll sum=0;
        for(ll i=0;i<n;i++){
            sum+=abs(l[i]-ans);
        }
        cout<<sum<<"\n";
    }
}
    