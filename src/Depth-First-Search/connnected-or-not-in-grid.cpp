/*
Bismillahir Rahmanir Rahim
Author: Md Nurul Amin
Information and Communication Engineering, NSTU
*/
///have to find number of connected points by vertically, horizontally and diagonally adjacency.
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mo=1e9+7;
const int N=1e5+7;
char grid[105][105];
int vis[105][105];
bool willsolve=true;
int n,m;
int fx[8]={1, 1, 0, -1, -1, -1, 0, 1};
int fy[8]={0, 1, 1, 1, 0, -1, -1, -1};
void dfs(int idx, int idy)
{
    vis[idx][idy]=1;
    for(int i=0; i<8; i++){
        int x=idx+fx[i], y=idy+fy[i];
        if(x>=1 and x<=n and y>=1 and y<=m and vis[x][y]==0 and grid[x][y]=='@'){
            dfs(x,y);
        }
    }


}

void solve()
{

    cin>>n>>m;

    if(m==0)
    {
        willsolve=false;
        return;
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>grid[i][j];
        }
    }
    int ans=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(vis[i][j]==0 and grid[i][j]=='@'){
                dfs(i,j);
                ans++;
                //cout<<ans<<endl;
            }
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            grid[i][j]='#';
            vis[i][j]=0;
        }
    }

    cout<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1; //cin>>t;
    while(1)
    {
        if(willsolve)
            solve();
        if(!willsolve)
        {
            break;
        }
    }
    return 0;
}


