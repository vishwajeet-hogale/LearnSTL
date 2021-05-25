#include <iostream>
#include <bits/stdc++.h>
#define M 5

using namespace std;
vector<vector<int>> graph(M, vector<int>(M, 0));
void dfs(vector<int> &r, int src, int des)
{
    if (src == des)
    {
        r.push_back(src);

        for (int &i : r)
        {
            cout << i << " ";
        }
        cout << "\n";
        r.pop_back();
        return;
    }
    r.push_back(src);
    for (int j = src + 1; j < graph.size(); j++)
    {
        if (graph[src][j] == 1)
        {
            dfs(r, j, des);
        }
    }
    r.pop_back();
}
int main()
{
    vector<pair<int, int>> m;
    m.push_back(make_pair(0, 2));
    m.push_back(make_pair(0, 1));
    m.push_back(make_pair(0, 3));
    m.push_back(make_pair(1, 3));
    m.push_back(make_pair(2, 0));
    m.push_back(make_pair(2, 1));
    for (auto &x : m)
        graph[x.first][x.second] = 1;
    vector<int> r;
    dfs(r, 0, 3);
    return 0;
}