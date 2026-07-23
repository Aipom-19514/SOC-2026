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
        vector<ll> a(n+1);
        for(ll i=0;i<n;i++){
            cin>>a[i+1];
        }
        vector<ll> l,d,r;
        queue<ll> q;
        ll i=1;
        for(ll i=1;i<=n;i++){
            q.push(a[i]);
        }
        while(i<=n&&!q.empty()){
            if(a[i]!=q.front()){
                i++;
                continue;
            }
            q.pop();
            ll k;
            for(ll j=i;j<=n;j++){
                if(a[i]>=a[j]) k=j;
            }
            if(k==i)
                continue;
            ll temp=a[i];
            for(ll j=i;j<k;j++){
                a[j]=a[j+1];
            }
            a[k]=temp;
            l.push_back(i);
            r.push_back(k);
            d.push_back(1);
        }
        cout<<l.size()<<"\n";
        for(ll i=0;i<l.size();i++){
            cout<<l[i]<<" "<<r[i]<<" "<<d[i]<<"\n";
        }
    }
}
    