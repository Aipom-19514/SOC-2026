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
        ll m, n, k;
        cin>>n>>m>>k;
        ll div=m/n;
        ll rem=m%n;
        if(k>3) cout<<0;
        else if(k==3){
            if(div>0) cout<<m-n+1-(div);
            else cout<<0;
        }
        else if(k==2){
            if(div>0)cout<<(div)+n-1;
            else cout<<m;
        }
        else if(k==1){
            cout<<1;
        }
        cout<<"\n";
    }
}
    