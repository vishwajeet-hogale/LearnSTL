#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int heightChecker(vector<int> &heights)
    {
        vector<int> expected = heights;
        sort(expected.begin(), expected.end());
        int c = 0;
        for (int i = 0; i < heights.size(); i++)
        {
            if (heights[i] != expected[i])
                c++;
        }
        return c;
    }
};