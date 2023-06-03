/*
Bismillahir Rahmanir Rahim
Author: Md Nurul Amin
Information and Communication Engineering, NSTU
*/
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mo=1e9+7;
const int N=1e5+7;
vector<int> g[105];
int tim=0;
int start[105], ses[105];
int vis[105];
void dfs(int idx){
    vis[idx]=1;

    tim++;
    start[idx]=tim;
    for(auto i : g[idx]){
        if(!vis[i]){
            dfs(i);
        }
    }
    tim++;
    ses[idx]=tim;
}

void solve()
{
    int n; cin>>n;
    for(int i=1; i<=n; i++)
    {
        int node, deg;
        cin>>node>>deg;
        for(int j=1; j<=deg; j++){
            int x; cin>>x;
            g[node].push_back(x);
        }
    }

    for(int i=1; i<=n; i++){
        if(!vis[i]){
            dfs(i);
        }
    }
    for(int i=1; i<=n; i++){
        cout<<i<<' '<<start[i]<<' '<<ses[i]<<'\n';
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

