
#include <bits/stdc++.h>
using namespace std;

int dRow[] = { -1, 0, 1, 0 };
int dCol[] = { 0, 1, 0, -1 };


bool isValid(vector<vector<bool> >& vis,
             int row, int col,
             int COL, int ROW)
{

    if (row < 0 || col < 0 || col > COL - 1
        || row > ROW - 1)
        return false;

    if (vis[row][col] == true)
        return false;

    return true;
}

void DFSUtil(int row, int col,
             vector<vector<int> > grid,
             vector<vector<bool> >& vis,
             int M, int N)
{

    vis[row][col] = true;

    cout << grid[row][col] << " ";


    for (int i = 0; i < 4; i++) {

        int x = row + dRow[i];
        int y = col + dCol[i];


        if (isValid(vis, x, y, M, N))
            DFSUtil(x, y, grid, vis, M, N);
    }
}


void DFS(int row, int col,
         vector<vector<int> > grid,
         int M, int N)
{

    vector<vector<bool> > vis(
        M + 1, vector<bool>(N + 1, false));


    DFSUtil(0, 0, grid, vis, M, N);
}

int main()
{
    vector<vector<int> > grid{ { 1, 2, 3, 4 },
                               { 5, 6, 7, 8 },
                               { 9, 10, 11, 12 },
                               { 13, 14, 15, 16 } };

    int M = grid.size();

    int N = grid[0].size();

    DFS(0, 0, grid, M, N);

    return 0;
}
