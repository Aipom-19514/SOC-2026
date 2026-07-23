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
        ll n;
        cin>>n;
        vector<string> f(n);
        for(ll i=0;i<n;i++){
            cin>>f[i];
        }
        ll m=1e9+7;
        vector<vector<ll>> dp(n, vector<ll>(n,0));
        if(f[0][0]=='.')dp[0][0]=1;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                if(f[i][j]=='*'){
                    dp[i][j]==0;
                    continue;
                }
                if(i==0&&j==0) continue;
                if(i>0) dp[i][j]+=dp[i-1][j];
                if(j>0) dp[i][j]+=dp[i][j-1];
                dp[i][j]=dp[i][j]%m;
            }
        }
        cout<<dp[n-1][n-1]<<"\n";
    }
}
    