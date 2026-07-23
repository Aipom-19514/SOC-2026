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
        vector<ll> a(n),b(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<n;i++){
            cin>>b[i];
        }
        ll r1=0,r2=0,xp=0,xm=0;
        for(ll i=0;i<n;i++){
            if(a[i]>b[i]) r1+=a[i];
            if(a[i]<b[i]) r2+=b[i];
            if(a[i]==b[i]){
                if(a[i]==1) xp++;
                if(a[i]==-1) xm++;
            } 
        }
        while(xp--){
            if(r1<r2) r1++;
            else r2++;
        }
        while(xm--){
            if(r1>r2)r1--;
            else r2--;
        }
        cout<<min(r1,r2)<<"\n";
    }
}
    