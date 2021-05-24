#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void helper(vector<vector<int>> &res, vector<int> &r, int src, int des, vector<vector<int>> &graph)
    {
        if (src == des)
        {
            // res.push_back(r);
            r.push_back(src);
            res.push_back(r);
            r.pop_back();
            return;
        }
        r.push_back(src);
        for (int i = 0; i < graph.size(); i++)
        {
            if (graph[src][i] == 1)
            {
                // r.push_back(i);
                helper(res, r, i, des, graph);
            }
        }
        r.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>> &graph)
    {
        vector<vector<int>> res;
        vector<int> r;
        vector<vector<int>> map(graph.size(), vector<int>(graph.size(), 0));
        for (int i = 0; i < graph.size(); i++)
        {
            for (int &x : graph[i])
            {
                map[i][x] = 1;
            }
        }
        helper(res, r, 0, graph.size() - 1, map);
        return res;
    }
};
