#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minCostClimbingStairs(vector<int> &cost)
    {
        vector<int> m(cost.size(), INT_MAX);

        m[0] = cost[0];
        m[1] = cost[1];
        for (int i = 2; i < cost.size(); i++)
        {
            m[i] = cost[i] + min(m[i - 1], m[i - 2]);
        }
        return min(m[cost.size() - 1], m[cost.size() - 2]);
    }
};