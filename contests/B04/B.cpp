#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 1e18
#define epsilon 1e-9
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    t=1;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<vector<ll>> grid(n);
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                ll x;
                cin>>x;
                grid[i].push_back(x);
            }
        }
        ll left[n][m],right[n][m],up[n][m],down[n][m];
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                if(j==0) left[i][j]=0;
                else left[i][j]=left[i][j-1]+grid[i][j-1];
            }
        }
        for(ll i=n-1;i>=0;i--){
            for(ll j=m-1;j>=0;j--){
                if(j==m-1) right[i][j]=0;
                else right[i][j]=right[i][j+1]+grid[i][j+1];
            }
        }
        for(ll j=0;j<m;j++){
            for(ll i=0;i<n;i++){
                if(i==0) up[i][j]=0;
                else up[i][j]=up[i-1][j]+grid[i-1][j];
            }
        }
        for(ll j=m-1;j>=0;j--){
            for(ll i=n-1;i>=0;i--){
                if(i==n-1) down[i][j]=0;
                else down[i][j]=down[i+1][j]+grid[i+1][j];
            }
        }
        ll ans=0;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                if(grid[i][j])continue;
                if(left[i][j])ans++;
                if(right[i][j])ans++;
                if(up[i][j])ans++;
                if(down[i][j])ans++;
            }
        }
        cout<<ans<<"\n";
    }
}
    