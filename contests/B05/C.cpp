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
        ll n,p;
        cin>>n>>p;
        for(ll i=2;i<=n;i++){
            cout<<1<<" "<<i<<"\n";;
        }
        for(ll i=3;i<=n;i++){
            cout<<2<<" "<<i<<"\n";;
        }
        ll need=p+3;
        for(ll i=3;i<=n;i++){
            if(need==0) break;
            for(ll j=i+1;j<=n;j++){
                if(need==0) break;
                cout<<i<<" "<<j<<"\n";
                need--;
            }
        }
    }
}
    