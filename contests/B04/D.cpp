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
        ll sum=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%2!=0){
            cout<<-1<<"\n";
            continue;
        }
        cout<<n-abs(sum)/2<<"\n";
        if(sum>=0){
            for(ll i=0;i<n;i++){
                if(i==n-1||a[i+1]!=1||sum==0) cout<<i+1<<" "<<i+1<<"\n";
                else{
                    cout<<i+1<<" "<<(i+2)<<"\n";
                    sum-=2;
                    i++;
                }
            }
        }
        else{
            for(ll i=0;i<n;i++){
                if(i==n-1||a[i+1]!=-1||sum==0) cout<<i+1<<" "<<i+1<<"\n";
                else{
                    cout<<i+1<<" "<<(i+2)<<"\n";
                    sum+=2;
                    i++;
                }
            }
        }

    }
}
