#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 1e18
#define epsilon 1e-9

ll n,m;
vector<string> grid;
queue<pair<ll,ll>> q;
vector<vector<bool>> visitedA;
vector<vector<bool>> visitedM;
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
        visitedA.assign(n, vector<bool>(m, false));
        visitedM.assign(n, vector<bool>(m, false));
        parent.assign(n,vector<pair<int,int>>(m, {-1,-1}));
        moveTo.assign(n, vector<char>(m, ' '));

        for(ll i=0;i<n;i++){
            cin>>grid[i];
        }
        ll dx[]={-1,1,0,0};
        ll dy[]={0,0,-1,1};
        char dir[]={'U','D','L','R'};

        vector<vector<ll>> distM(n, vector<ll>(m,INF));
        ll ax,ay;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                if(grid[i][j]=='M'){
                    q.push({i,j});
                    distM[i][j]=0;
                    visitedM[i][j]=true;
                }
                if(grid[i][j]=='A'){
                    ax=i;
                    ay=j;
                }
            }
        }

        while(!q.empty()){
            pair<ll,ll> p=q.front();
            q.pop();
            ll i=p.first, j=p.second;

            for(ll k=0;k<4;k++){
                ll a=i+dx[k], b=j+dy[k];
                if(a>=0&&a<n&&b>=0&&b<m&&!visitedM[a][b]&&grid[a][b]!='#'){
                    visitedM[a][b]=true;
                    distM[a][b]=distM[i][j]+1;
                    q.push({a,b});
                }
            }
        }

        vector<vector<ll>> distA(n, vector<ll>(m,INF));
        distA[ax][ay]=0;
        visitedA[ax][ay]=true;
        q.push({ax,ay});
        ll ex,ey;
        bool r=false;
        while(!q.empty()){
            pair<ll,ll> p=q.front();
            q.pop();
            ll i=p.first, j=p.second;

            for(ll k=0;k<4;k++){
                ll a=i+dx[k];
                ll b=j+dy[k];
                if(a>=0&&a<n&&b>=0&&b<m&&grid[a][b]!='#'&&!visitedA[a][b]){
                    visitedA[a][b]=1;
                    parent[a][b]={i,j};
                    moveTo[a][b]=dir[k];
                    distA[a][b]=distA[i][j]+1;
                    q.push({a,b});

                    if((distA[a][b]<distM[a][b]&&(a==n-1||b==m-1||a==0||b==0))){
                        ex=a;
                        ey=b;
                        r=true;
                        while(!q.empty()) q.pop();
                        break;
                    }
                }
            }
        }
        if(ax==0||ay==0||ax==n-1||ay==m-1){
            cout<<"YES\n0\n";
            return 0;
        }
        
        if(!r){
            cout<<"NO"<<"\n";
            return 0;
        }

        ll vx=ex, vy=ey;
        string ans;
        while(make_pair(vx,vy)!=make_pair(ax,ay)){
            ans.push_back(moveTo[vx][vy]);
            auto p=parent[vx][vy];
            vx=p.first;
            vy=p.second;
        }
        reverse(ans.begin(),ans.end());
        cout<<"YES"<<"\n"<<ans.length()<<"\n"<<ans<<"\n";
    }
}
    