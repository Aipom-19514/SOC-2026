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
        ll ans=0;
        while(n>0){
            ll temp=n;
            ll d=0;
            while(temp>0){
                d=max(d,temp%10);
                temp=temp/10;
            }
            n-=d;
            ans++;
        }
        cout<<ans<<"\n";
    }
}
    