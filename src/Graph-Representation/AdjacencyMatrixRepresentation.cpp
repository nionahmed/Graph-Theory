/*
Bismillahir Rahmanir Rahim
Author: Md Nurul Amin
Information and Communication Engineering, NSTU
*/
///Store graph by adjacency matrix
///need so much storage.

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mo=1e9+7;
const ll N=105;
ll g[N][N];

void solve()
{
    ll n, m; cin>>n>>m;
    for(ll i=1; i<=m; i++)
    {
        ll u,v;
        cin>>u>>v;
        g[u][v]=1;
        g[v][u]=1;
    }
    for(ll i=1; i<=n; i++){
        for(ll j=1; j<n; j++){
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
