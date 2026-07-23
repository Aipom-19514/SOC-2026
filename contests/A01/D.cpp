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
        for(ll i=0;i<k;i++){
            if(i<2*k-n-1)cout<<i+1<<" ";
            else cout<<3*k-n-1-i<<" ";
        }
        cout<<"\n";
    }
}
    