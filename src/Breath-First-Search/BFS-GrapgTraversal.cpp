
/*
Bismillahir Rahmanir Rahim
Author: Md Nurul Amin
Information and Communication Engineering, NSTU
*/
///traverse graph using BFS. Level-wise traversing.
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mo=1e9+7;
const int N=2*1e5+7;
vector<ll> g[N];
ll vis[N];

void solve()
{
    ll n,e;
    cin>>n>>e;
    for(ll i=1; i<=e; i++){
        ll u,v; cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    queue<ll>q;
    q.push(1); vis[1]=1;
    cout<<1<<" ";
    while(!q.empty()){
        ll u=q.front();
        q.pop();
        for(auto v : g[u]){
            if(vis[v]==0){
                q.push(v);
                vis[v]=1;
                cout<<v<<" ";
            }
        }
    }
    cout<<endl;


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



