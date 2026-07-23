#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 9e18
#define epsilon 1e-9
ll invert(ll n){
    ll rev=0;
    while (n>0) {
        int d=n%10;
        rev=rev*10+d;
        n/=10;
    }
    return rev;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a=0, b=0;
        int flip=1;
        ll k=0;
        while(n%10==0){
            n=n/10;
            k++;
        }
        n=invert(n);
        while(n>0){
            ll r=n%10;
            if(r%2==0){
                a=10*a+r/2;
                b=10*b+r/2;
            }
            else if(r%2==1 && flip==1){
                a=10*a+r/2+1;
                b=10*b+r/2;
                flip=-1;
            }
            else if(r%2==1 && flip==-1){
                a=10*a+r/2;
                b=10*b+r/2+1;
                flip=1;
            }
            n=n/10;
        }
        a=a*pow(10, k);
        b=b*pow(10,k);
        cout<<a<<" "<<b<<"\n";
    }
}
    