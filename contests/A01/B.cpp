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
        ll t=0;
        ll i=1;
        n-=1;
        while(n>0&&i<k){
            t++;
            n+=-i;
            i*=2;
        } 
        if(n>0){
            t+=(n+k-1)/k;
        }
        cout<<t<<"\n";
    }
}
    