
/*
Bismillahir Rahmanir Rahim
Author: Md Nurul Amin
Information and Communication Engineering, NSTU
*/
///https://codeforces.com/problemset/problem/24/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mo=1e9+7;
const int N=2*1e5+7;
vector<ll> g[105];
int n;
int ans=INT_MAX;

map<pair<int , int>,int>mp,mp2;
int dfs(int idx, int par){
   int cm=0;
    if(mp[{par,idx}]==0)cm+=mp2[{par,idx}];

   for(auto i: g[idx]){
    if(i==par)continue;
    if(i==1){
    if(mp[{idx,i}]==0)cm+=mp2[{idx,i}];
    ans=min(ans,cm); cm=0;
    }
    else
    cm+=dfs(i, idx);


   }
   if(idx==1)return ans;
   else return cm;
}

void solve()
{
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        ll u,v,money;
        cin>>u>>v>>money;
        g[u].push_back(v);
        g[v].push_back(u);

        mp[{u,v}]=money;
        mp2[{v,u}]=money;
        mp2[{u,v}]=money;

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



