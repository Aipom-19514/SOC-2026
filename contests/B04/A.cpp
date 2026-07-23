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
        if(n%2==0){
            for(ll i=0;i<n-2;i++){
                cout<<"3";
            }
            cout<<"66\n";
        }
        else if(n==1 || n==3) cout<<"-1\n";
        else{
            for(ll i=0;i<n-5;i++){
                cout<<"3";
            }
            cout<<"36366\n";
        }
    }
}
    