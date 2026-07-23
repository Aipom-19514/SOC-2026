#include<bits\stdc++.h>
using namespace std;
#define ll long long
#define INF 9e18
#define epsilon 1e-9
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        ll x, y, k;
        cin>>x>>y>>k;
        ll m=(k*(y+1)+x-3)/(x-1)+k;
        cout<<m<<"\n";
    }
}
    