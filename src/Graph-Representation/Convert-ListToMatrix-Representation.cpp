/*
Bismillahir Rahmanir Rahim
Author: Md Nurul Amin
Information and Communication Engineering, NSTU
*/
//
///converting graph representation from list to matrix.
///https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_11_A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mo=1e9+7;
const int N=1e5+7;
vector<ll> Glist[105];
ll Gmatrix[105][105];


void solve()
{
    int n; cin>>n;
    for(int i=1; i<=n; i++)
    {
        int node, deg;
        cin>>node>>deg;
        for(int j=1; j<=deg; j++){
            int child; cin>>child;
            Gmatrix[node][child]=1;
        }

    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++){
            cout<<Gmatrix[i][j]<<" \n"[j==n];
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

