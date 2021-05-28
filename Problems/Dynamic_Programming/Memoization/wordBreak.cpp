#include <iostream>
#include <bits/stdc++.h>

#include <string>
using namespace std;

map<string, bool> dp;
bool wordBreak(string s, vector<string> &wordDict)
{
    if (s.length() == 0)
    {
        return true;
    }
    else if (dp.find(s) != dp.end())
        return dp[s];

    for (string j : wordDict)
    {
        string prefix = s.substr(0, j.length());

        if (prefix.compare(j) == 0)
        {

            if (wordBreak(s.substr(j.length(), s.length()), wordDict))
            {
                dp[s] = true;
                return true;
            }
        }
    }
    dp[s] = false;
    return false;
}
int main()
{
    vector<string> dict({"i", "like", "sam", "sung", "samsung", "mobile", "ice",
                         "and", "cream", "icecream", "man", "go", "mango"});
    string s = "ilikeicecreamandmango";

    vector<string> r;
    cout << wordBreak(s, dict);
    return 0;
}