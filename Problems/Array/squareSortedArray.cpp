#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        priority_queue<int, vector<int>,
                       greater<int>>
            q;
        vector<int> res;
        for (int i : nums)
        {
            q.push(i * i);
        }
        while (!q.empty())
        {
            res.push_back(q.top());
            q.pop();
        }
        return res;
    }
};