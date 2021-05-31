#include <iostream>
#include <bits/stdc++.h>
#define N 8
using namespace std;
vector<vector<int>> board(N, vector<int>(N, -1));
void printSolution()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}
int validPlace(int row, int col)
{
    return row >= 0 && col >= 0 && row < N && col < N && board[row][col] == -1;
}
int solve(int row, int col, vector<int> &X, vector<int> &Y, int i)
{
    if (i == N * N)
    {
        printSolution();
        return 1;
    }
    for (int j = 0; j < 8; j++)
    {
        int nextx = row + X[j];
        int nexty = col + Y[j];
        if (validPlace(nextx, nexty))
        {

            board[nextx][nexty] = i;

            if (solve(nextx, nexty, X, Y, i + 1))
                return 1;
            board[nextx][nexty] = -1;
        }
    }
    return 0;
}
int main()
{
    board[0][0] = 0;
    vector<int> X({2, 1, -1, -2, -2, -1, 1, 2});
    vector<int> Y({1, 2, 2, 1, -1, -2, -2, -1});
    int x;
    for (int row = 0; row < 8; row++)
    {
        for (int col = 0; col < 8; col++)
        {
            cout << "Start at : " << row << "," << col << endl;
            x = solve(row, col, X, Y, 1);
            cout << "\n\n";
        }
    }

    return 0;
}
