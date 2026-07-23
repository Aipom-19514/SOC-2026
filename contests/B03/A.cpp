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
        ll n,k;
        cin>>n>>k;
        vector<ll> a(k);
        for(ll i=0;i<k;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        ll moves=0;
        for(ll i=0;i<k;i++){
            if(i==k-1) continue;
            else if(a[i]==1) moves+=1;
            else if(a[i]!=1) moves+=2*a[i]-1;
        }
        cout<<moves<<"\n";
    }
}
    