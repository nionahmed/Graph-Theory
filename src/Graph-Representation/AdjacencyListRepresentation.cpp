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
const ll N=105;
vector<ll> g[N];
///ll indeg[N], outdeg[N];
void solve()
{
    ll n, m; cin>>n>>m;
    for(ll i=1; i<=m; i++)
    {
        ll u,v;
        cin>>u>>v;
        /// indeg[v]++;
        /// outdeg[u]++; for indegree and outdegree of directed graph.

        g[u].push_back(v);
        g[v].push_back(u);

    }
    for(ll i=1; i<=n; i++){
        ///cout<<g[i].size()<<endl; for degree of that node.
        cout<<i<<"->";
        for(ll j=0; j<g[i].size(); j++){
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
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
