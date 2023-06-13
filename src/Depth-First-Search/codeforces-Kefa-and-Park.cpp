
/*
Bismillahir Rahmanir Rahim
Author: Md Nurul Amin
Information and Communication Engineering, NSTU
*/
///https://lightoj.com/problem/equalizing-money

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mo=1e9+7;
const int N=2*1e5+7;
vector<ll> g[N];
int cat[N];
int n,m;
int dfs(int idx, int par){
    cat[idx]+=cat[idx]!=0 ? cat[par] : 0;
    int c=0, k=0;
    for(auto i: g[idx]){
        if(i==par)continue;
        k=1;
        c+=dfs(i,idx);
    }
    if(k==0 and cat[idx]<=m){
        c++;
    }
    if(cat[idx]<=m){
        return c;
    }
    else return 0;
}

void solve()
{
    cin>>n>>m;
    for(ll i=1; i<=n; i++){
        cin>>cat[i];
    }
    for(int i=1; i<n; i++)
    {
        ll u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);

    }
    cout<<dfs(1,0)<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1; //cin>>t;
    for(ll i=1; i<=t; i++)
    {

        solve();
    }
    return 0;
}


