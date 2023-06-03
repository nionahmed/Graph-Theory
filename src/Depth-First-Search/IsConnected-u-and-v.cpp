/*
Bismillahir Rahmanir Rahim
Author: Md Nurul Amin
Information and Communication Engineering, NSTU
*/
///Store graph by adjacency list
///Recommended to use.
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mo=1e9+7;
const int N=1e5+7;
vector<ll> g[N];
ll vis[N];

void dfs(int idx, int root){
    vis[idx]=root;
    for(auto i: g[idx]){
        if(vis[i]==0){
            dfs(i,root);

        }
    }
}
void solve()
{
    int n, m; cin>>n>>m;
    for(int i=1; i<=m; i++)
    {
        ll u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);

    }
    ll ans=0;
    for(ll i=1; i<=n; i++){
        if(!vis[i]){
            dfs(i,i);
            ans++;
        }
    }
    int q; cin>>q;
    while(q--){
        ll u,v; cin>>u>>v;
        if(vis[u]==vis[v]){
            cout<<"Connected, there is path a from u to v"<<endl;
        }
        else{
            cout<<"Disconnected"<<endl;
        }
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1; //cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

