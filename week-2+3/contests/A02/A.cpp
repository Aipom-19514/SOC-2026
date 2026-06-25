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
        vector<ll> b(7);
        for(int i=0;i<7;i++){
            cin>>b[i];
        }
        cout<<b[0]<<" "<<b[1]<<" "<<b[6]-b[0]-b[1]<<"\n";
    }
}
    