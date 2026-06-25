#include<bits/stdc++.h>
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
        ll a, b, c, d, k;
        cin>>a>>b>>c>>d>>k;
        ll x=(a+c-1)/c;
        ll y=(b+d-1)/d;
        if(x+y>k){
            cout<<-1<<"\n";
        }
        else{
            cout<<x<<" "<<y<<"\n";
        }
    }
}
    