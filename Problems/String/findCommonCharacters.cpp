#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> commonChars(vector<string> &words)
    {
        vector<int> result(26, INT_MAX);

        for (string j : words)
        {
            vector<int> vis(26, 0);
            for (char c : j)
            {
                vis[c - 'a']++;
            }
            for (int i = 0; i < 26; i++)
            {
                result[i] = min(result[i], vis[i]);
            }
        }
        vector<string> res;
        for (int i = 0; i < 26; i++)
        {
            while (result[i] > 0)
            {
                char c = char(i + 97);
                res.push_back(string(1, (char)97 + i));
                result[i]--;
            }
        }
        return res;
    }
};