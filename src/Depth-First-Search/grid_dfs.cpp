#include <iostream>
#include <bits/stdc++.h>
using namespace std;


typedef long long ll;

const ll MAX = 100000000;
int n, m;
vector < vector<int > > visi;
vector < vector<char > > a;
//char a[][]
int fx[4]= {1,-1,0,0};
int fy[4]= {0,0,1,-1};
int cnt = 0;

void dfs(int indx, int indy){
    cnt ++;
    visi[indx][indy]=1;
    for(int i =0; i<4;i++){
        int x= indx+fx[i], y= indy + fy[i];
        if(x>=0 and x<n and y>=0 and y<m and visi[x][y]==0 and a[x][y]=='1'){
            dfs(x,y);
        }
    }
}




int main(){
    ll t; cin>>t;
    while(t--)
    cin >> n>> m;
    a.clear();

    a.resize(n,vector<char>(m));
    visi.resize(n, vector<int>(m,0));
    for(int i =0; i<n; i++){
        for(int j =0; j<m; j++)
            cin >> a[i][j];
    }
    vector<int> b;
    for(int i =0; i<n; i++){
        for(int j =0; j<m; j++){
            if(a[i][j]=='1' and visi[i][j]==0){
                cnt = 0;
                dfs(i,j);
                b.push_back(cnt);

            }
        }
    }
    sort(b.begin(), b.end(), greater<>());


    return 0;
}

