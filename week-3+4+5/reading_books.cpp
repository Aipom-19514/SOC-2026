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
        vector<ll> t(n);
        for(ll i=0;i<n;i++){
            cin>>t[i];
        }
        sort(t.begin(),t.end());
        ll m=t[n-1];
        ll sum=0;
        for(ll i=0;i<n;i++){
            sum+=t[i];
        }
        cout<<max(2*m,sum)<<"\n";
    }
}
    