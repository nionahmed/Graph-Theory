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
const int N=1e5+7;
vector<ll> g[N];
ll vis[N];
ll money[N];
ll mem=0;
ll sum=0;
void dfs(int idx){
    vis[idx]=1;
    mem++;
    sum+=money[idx];
    for(auto i: g[idx]){
        if(vis[i]==0){
            dfs(i);

        }
    }

}
void solve()
{
    set<int>s;
    int n, m; cin>>n>>m;
    for(ll i=1; i<=n; i++){
        cin>>money[i];
    }
    for(int i=1; i<=m; i++)
    {
        ll u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);

    }
    ll ch=0;
    for(ll i=1; i<=n; i++){
        if(!vis[i]){
            dfs(i);
            if(sum%mem==0){
                s.insert(sum/mem);
            }
            else ch=1;
            sum=0;
            mem=0;
        }
    }
    if(s.size()!=1 or ch==1)cout<<"No"<<endl;
    else
    cout<<"Yes"<<endl;
    for(ll i=1; i<=n; i++){
        g[i].clear();
        vis[i]=0;
        money[i]=0;
   }



}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1; cin>>t;
    for(ll i=1; i<=t; i++)
    {
        cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;
}


