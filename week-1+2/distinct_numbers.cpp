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
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        ll count=1;
        for(int i=1;i<n;i++){
            if(v[i]!=v[i-1]) count++;
        }
        cout<<count<<"\n";
    }
}