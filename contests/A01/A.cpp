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
        ll a,b,c;
        cin>>a>>b>>c;
        if(a>b){
            ll temp=b;
            b=a;
            a=temp;
        }
        if(b-a<a){
            cout<<-1<<"\n";;
            continue;
        }
        if(c>2*(b-a)){
            cout<<-1<<"\n";;
            continue;
        }
        if(c<=2*(b-a)&&c>(b-a)){
            cout<<c-(b-a)<<"\n";
            continue;
        }
        if(c<=(b-a)&&c>=1){
            cout<<c+(b-a)<<"\n";
            continue;
        }
    }
}
    