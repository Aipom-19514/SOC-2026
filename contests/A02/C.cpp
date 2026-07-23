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
        ll n;
        cin>>n;
        vector<pair<ll, ll> > a(n);
        for(int i=0;i<n;i++){
            cin>>a[i].first;
        }
        for(int i=0;i<n;i++){
            cin>>a[i].second;
        }
        sort(a.begin(), a.end(), [](const pair<int, int>& a, const pair<int, int>& b){
            if(a.first==b.first)
                return a.second>b.second;
            return a.first<b.first;
        });
        ll sum=0;
        while(!a.empty()&&a.back().second+sum<a.back().first){
            sum=sum+a.back().second;
            a.pop_back();
        }
        if(!a.empty()) cout<<max(a.back().first,sum)<<"\n";
        else cout<<sum<<"\n";
    }
}
    