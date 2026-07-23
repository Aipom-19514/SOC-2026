#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 1e18
#define epsilon 1e-9

ll n,m;
vector<string> grid;
vector<vector<bool>> visited;
queue<pair<ll,ll>> q;
vector<vector<pair<int,int>>> parent;
vector<vector<char>> moveTo;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    t=1;
    while(t--){
        cin>>n>>m;
        grid.resize(n);
        visited.assign(n, vector<bool>(m,0));
        parent.assign(n,vector<pair<int,int>>(m, {-1,-1}));
        moveTo.assign(n, vector<char>(m, ' '));
        for(ll i =0;i<n;i++){
            cin>>grid[i];
        }
        ll sx,sy,ex,ey;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                if(grid[i][j]=='A'){
                    sx=i;
                    sy=j;
                }
                if(grid[i][j]=='B'){
                    ex=i;
                    ey=j;
                }
            }
        }
        visited[sx][sy]=1;
        q.push({sx,sy});
        ll dx[]={-1,1,0,0};
        ll dy[]={0,0,-1,1};
        char dir[]={'U','D','L','R'};
        while(!q.empty()){
            pair<ll,ll> c=q.front();
            q.pop();
            ll i=c.first, j=c.second;
            for(ll k=0;k<4;k++){
                ll a=i+dx[k];
                ll b=j+dy[k];
                if(a>=0&&a<n&&b>=0&&b<m&&grid[a][b]!='#'&&!visited[a][b]){
                    visited[a][b]=1;
                    parent[a][b]={i,j};
                    moveTo[a][b]=dir[k];
                    q.push({a,b});
                }
            }
        }

        if(!visited[ex][ey]){
            cout << "NO";
            return 0;
        }

        ll x=ex, y=ey;
        string ans;
        while(make_pair(x,y)!=make_pair(sx,sy)){
            ans.push_back(moveTo[x][y]);
            auto p=parent[x][y];
            x=p.first;
            y=p.second;
        }
        reverse(ans.begin(),ans.end());
        cout<<"YES"<<"\n"<<ans.length()<<"\n"<<ans<<"\n";
    }
}
    