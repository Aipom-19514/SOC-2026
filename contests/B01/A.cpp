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
        vector<ll> a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<n-1;i++){
            if(k-a[i]>0){
                k=k-a[i]; 
                a[n-1]+=a[i];
                a[i]=0;
            }
            else{
                a[i]=a[i]-k;
                a[n-1]+=k;
                k=0;
            }
        }
        for(ll i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
}
    