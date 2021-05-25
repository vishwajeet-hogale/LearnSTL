#include <iostream>
#include <bits/stdc++.h>
#define M 5
#define N 7
using namespace std;
vector<vector<int>> graph(M, vector<int>(N, 0));
bool isValid(int row, int col)
{
    return (row < M && col < N);
}
void helper(int row, int col, vector<int> &r, vector<vector<int>> &graph)
{
    if (!isValid(row, col))
        return;

    if (row == M - 1 && col == N - 1)
    {
        r.push_back(graph[row][col]);
        cout << "(";
        for (int &j : r)
            cout << j << " ";
        cout << ")\n";
        r.pop_back();

        return;
    }
    r.push_back(graph[row][col]);
    // r.push_back(graph[row][col]);
    // cout << graph[row][col] << endl;

    helper(row + 1, col, r, graph);

    helper(row, col + 1, r, graph);

    r.pop_back();
}
int main()
{
    vector<int> r;
    int c = 0;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            graph[i][j] = ++c;
        }
    }
    for (int i = 0; i < M; i++)
    {
        cout << "(";
        for (int j = 0; j < N; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << ")\n";
    }
    helper(0, 0, r, graph);
    return 0;
}
