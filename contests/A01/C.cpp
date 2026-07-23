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
        ll n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        vector<ll> p(m);
        for(ll i=0;i<m;i++){
            cin>>p[i];
            p[i]-=1;
        }
        vector<ll> count(26,0);
        sort(p.begin(),p.end());
        ll j=0,r=m;
        for(ll i=0;i<n;i++){
            if(j>=m) break;
            if(i<=p[j]){
                count[s[i]-'a']+=r;
            }
            else{
                j++;
                i--;
                r--;
            }
        }
        for(ll i=0;i<n;i++){
            count[s[i]-'a']++;
        }
        for(ll i=0;i<26;i++){
            cout<<count[i]<<" ";
        }
        cout<<"\n";
    }
}
    