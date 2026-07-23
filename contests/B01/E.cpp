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
        bool c=false;
        ll j;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<i&&!c){
                c=true;
                j=i;
            }
        }
        if(!c){
            cout<<"Yes\n";
            continue;
        }
        bool b=false;
        for(ll i=j-1;i<n;i++){
            if(a[i]<n-1-i) b=true;
        }
        if(b){
            cout<<"No\n";
            continue;
        }
        cout<<"Yes\n";
    }
}
    