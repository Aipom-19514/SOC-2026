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
        ll n,x;
        cin>>n>>x;
        vector<ll> w(n);
        for(ll i=0;i<n;i++){
            cin>>w[i];
        }
        sort(w.begin(),w.end());
        ll i=0,j=n-1,c=0,d=0;
        while(i<=j){
            if(w[i]>x-w[j]){
                j--;d++;
            }
            else{
                i++;c++;j--;
            }
        }
        cout<<c+d<<"\n";
    }
}
    