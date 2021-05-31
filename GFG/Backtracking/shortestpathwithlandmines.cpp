#include <iostream>
#include <bits/stdc++.h>
#define M 12
#define N 10
#include <math.h>
using namespace std;
vector<vector<int>> board({{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                           {1, 0, 1, 1, 1, 1, 1, 1, 1, 1},
                           {1, 1, 1, 0, 1, 1, 1, 1, 1, 1},
                           {1, 1, 1, 1, 0, 1, 1, 1, 1, 1},
                           {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                           {1, 1, 1, 1, 1, 0, 1, 1, 1, 1},
                           {1, 0, 1, 1, 1, 1, 1, 1, 0, 1},
                           {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                           {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                           {0, 1, 1, 1, 1, 0, 1, 1, 1, 1},
                           {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                           {1, 1, 1, 0, 1, 1, 1, 1, 1, 1}});
int g = INT_MAX;
vector<int> rowNum = {0, 0, 1, -1};
vector<int> colNum = {1, -1, 0, 0};

int isValid(int row, int col)
{
    return row < M && col < N && row >= 0 && col >= 0;
}
void markUnsafeCells()
{
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            // if a landmines is found
            if (board[i][j] == 0)
            {
                // mark all adjacent cells
                for (int k = 0; k < 4; k++)
                    if (isValid(i + rowNum[k], j + colNum[k]))
                        board[i + rowNum[k]][j + colNum[k]] = -1;
            }
        }
    }

    // mark all found adjacent cells as unsafe
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (board[i][j] == -1)
                board[i][j] = 0;
        }
    }

    // Uncomment below lines to print the path
    /*for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << std::setw(3) << mat[i][j];
        }
        cout << endl;
    }*/
}
int isValidPlace(int row, int col)
{

    return row < M && col < N && row >= 0 && col >= 0 && board[row][col] == 1;
}
bool dfs(int row, int col, vector<vector<int>> &vis, pair<int, int> end, vector<pair<int, int>> &r)
{
    if (row == end.first && col == end.second)
    {
        int x = r.size();
        if (g > x)
            g = x;
        return true;
    }
    vis[row][col] = 1;
    r.push_back(make_pair(row, col));

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
    return false;
}

int main()
{
    vector<vector<int>> vis(M, vector<int>(N, 0));
    vector<pair<int, int>> r;

    markUnsafeCells();

    cout << "New board after marking all the unsafe positions" << endl;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < M; i++)
    {
        if (board[i][0] == 1)
            dfs(i, 0, vis, make_pair(M - 1, N - 1), r);
        // m = min(g, m);
    }

    cout << g << endl;
    return 0;
}