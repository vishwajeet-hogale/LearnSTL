#include <iostream>
#include <bits/stdc++.h>
#define M 3
#define N 10
#include <math.h>
using namespace std;
vector<vector<int>> board({{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                           {1, 1, 0, 1, 1, 0, 1, 1, 0, 1},
                           {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}});
int g = INT_MIN;
int isValidPlace(int row, int col)
{
    return row < M && col < N && row >= 0 && col >= 0 && board[row][col];
}
void dfs(int row, int col, vector<vector<int>> &vis, pair<int, int> end, vector<pair<int, int>> &r)
{
    if (row == end.first && col == end.second)
    {
        return;
    }
    vis[row][col] = 1;
    r.push_back(make_pair(row, col));
    int x = r.size();
    if (x > g)
        g = x;
    if (isValidPlace(row, col + 1) && !vis[row][col + 1])
        dfs(row, col + 1, vis, end, r);
    if (isValidPlace(row + 1, col) && !vis[row + 1][col])
        dfs(row + 1, col, vis, end, r);
    if (isValidPlace(row, col - 1) && !vis[row][col - 1])
        dfs(row, col - 1, vis, end, r);
    if (isValidPlace(row - 1, col) && !vis[row - 1][col])
        dfs(row - 1, col, vis, end, r);
    vis[row][col] = 0;
    r.pop_back();
    return;
}
int main()
{
    vector<vector<int>> vis(M, vector<int>(N, 0));
    vector<pair<int, int>> r;

    dfs(0, 0, vis, make_pair(M - 1, N - 1), r);
    cout << g + 1 << endl;
    return 0;
}