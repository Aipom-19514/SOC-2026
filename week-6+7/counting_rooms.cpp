#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 1e18
#define epsilon 1e-9

ll n,m;
vector<string> grid;
vector<vector<bool>> visited;

void dfs(ll i, ll j){
    visited[i][j]=true;
    ll dx[]={-1,1,0,0};
    ll dy[]={0,0,-1,1};

    for(ll k=0;k<4;k++){
        ll a=i+dx[k];
        ll b=j+dy[k];

        if(a>=0&&a<n&&b>=0&&b<m&&grid[a][b]=='.'&&visited[a][b]==0){
            dfs(a,b);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    t=1;
    while(t--){
        cin>>n>>m;
        grid.resize(n);
        visited.assign(n, vector<bool>(m,0));
        for(ll i =0;i<n;i++){
            cin>>grid[i];
        }
        ll rooms=0;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                if(grid[i][j]=='#'||visited[i][j]) continue;
                dfs(i,j);
                rooms++;
            }
        }
        cout<<rooms<<"\n";
    }
}
    