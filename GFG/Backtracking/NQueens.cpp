#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    vector<vector<string>> res;
    int isPlaceValid(int rowIndex, int colIndex, vector<vector<int>> &board, int V)
    {

        for (int i = 0; i < colIndex; i++)
            if (board[rowIndex][i] == 1)
                return false;

        for (int i = rowIndex, j = colIndex; i >= 0 && j >= 0; i--, j--)
        {
            if (board[i][j] == 1)
                return false;
        }

        for (int i = rowIndex, j = colIndex; i < V && j >= 0; i++, j--)
        {
            if (board[i][j] == 1)
                return false;
        }

        return true;
    }
    void solve(int col, int V, vector<vector<int>> &board)
    {
        if (col == V)
        {
            vector<string> temp;
            for (int i = 0; i < V; i++)
            {
                string s = "";
                for (int j = 0; j < V; j++)
                {
                    if (board[i][j])
                        s.push_back('Q');
                    else
                        s.push_back('.');
                }
                temp.push_back(s);
            }
            res.push_back(temp);
            return;
        }

        for (int j = 0; j < V; j++)
        {
            if (isPlaceValid(j, col, board, V))
            {
                board[j][col] = 1;

                solve(col + 1, V, board);

                board[j][col] = 0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<int>> board(n, vector<int>(n, 0));
        solve(0, n, board);
        return res;
    }
};
int main()
{

    Solution s;
    s.solveNQueens(10);
    return 0;
}