#include<bits\stdc++.h>
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
        ll n, sx, sy;
        cin>>n>>sx>>sy;
        vector<pair<ll, ll> > loc(n);
        ll count_N=0, count_NE=0, count_E=0, count_SE=0, count_S=0, count_SW=0, count_W=0, count_NW=0;
        for(ll i=0;i<n;i++){
            cin>>loc[i].first;
            cin>>loc[i].second;
            if(loc[i].first>sx&&loc[i].second>sy) count_NE++;
            if(loc[i].first<sx&&loc[i].second>sy) count_NW++;
            if(loc[i].first>sx&&loc[i].second<sy) count_SE++;
            if(loc[i].first<sx&&loc[i].second<sy) count_SW++;
            if(loc[i].first==sx&&loc[i].second>sy) count_N++;
            if(loc[i].first==sx&&loc[i].second<sy) count_S++;
            if(loc[i].first>sx&&loc[i].second==sy) count_E++;
            if(loc[i].first<sx&&loc[i].second==sy) count_W++;
        }
        ll max_val=max({count_NE+count_E+count_SE, count_SE+count_S+count_SW, count_SW+count_W+count_NW, count_NW+count_N+count_NE});
        cout<<max_val<<"\n";
        if(count_NE+count_E+count_SE==max_val){
            cout<<sx+1<<" "<<sy<<"\n";
        }
        else if(count_SE+count_S+count_SW==max_val){
            cout<<sx<<" "<<sy-1<<"\n";
        }
        else if(count_SW+count_W+count_NW==max_val){
            cout<<sx-1<<" "<<sy<<"\n";
        }
        else if(count_NW+count_N+count_NE==max_val){
            cout<<sx<<" "<<sy+1<<"\n";
        }
    }
}
    