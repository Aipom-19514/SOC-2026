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
        ll n,m,k;
        cin>>n>>m>>k;
        vector<ll> d(n),s(m);
        for(ll i=0;i<n;i++){
            cin>>d[i];
        }
        for(ll i=0;i<m;i++){
            cin>>s[i];
        }
        sort(d.begin(), d.end());
        sort(s.begin(), s.end());
        ll i=0,j=0,c=0;
        while(i<n&&j<m){
            if(s[j]<d[i]-k) j++;
            else if(s[j]>d[i]+k) i++;
            else{
                i++;j++;c++;
            }
        }
        cout<<c<<"\n";
    }
}
    