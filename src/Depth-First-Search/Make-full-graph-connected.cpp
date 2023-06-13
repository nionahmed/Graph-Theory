/*
Bismillahir Rahmanir Rahim
Author: Md Nurul Amin
Information and Communication Engineering, NSTU
*/
///Number of edge need to connect all islands.
///https://cses.fi/problemset/task/1666

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mo=1e9+7;
const int N=1e5+7;
vector<ll> g[N];
ll vis[N];
vector<int>vec;

void dfs(int idx){
    vis[idx]=1;
    for(auto i: g[idx]){
        if(vis[i]==0){
            dfs(i);

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
            dfs(i);
            vec.push_back(i);
        }
    }
    cout<<vec.size()-1<<endl;
    for(int i=0; i<vec.size()-1; i++){

        cout<<vec[i]<<" "<<vec[i+1]<<endl;
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



