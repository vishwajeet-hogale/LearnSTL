#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void dfs(int v, vector<vector<int>> &isConnected, vector<int> &vis)
    {
        vis[v] = 1;
        for (int i = 0; i < isConnected.size(); i++)
        {
            if (isConnected[v][i] == 1 && !vis[i])
            {
                dfs(i, isConnected, vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>> &isConnected)
    {
        vector<int> vis(isConnected.size(), 0);
        int c = 0;
        for (int i = 0; i < isConnected.size(); i++)
        {
            if (!vis[i])
            {
                dfs(i, isConnected, vis);
                c++;
            }
        }
        return c;
    }
};