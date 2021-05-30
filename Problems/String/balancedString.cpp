#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int ifEqual(string s)
    {
        map<char, int> m;
        m['R'] = 0;
        m['L'] = 0;
        for (char a : s)
            m[a]++;
        if (m['R'] == m['L'])
            return true;
        return false;
    }
    int balancedStringSplit(string s)
    {
        int i = 0;
        int c = 0;
        while (i < s.length())
        {
            string s1 = "";
            for (int j = i; j < s.length(); j++)
            {
                s1.push_back(s[j]);
                if (s1.length() % 2 == 0 && ifEqual(s1))
                {
                    i = j + 1;
                    c++;
                    break;
                }
            }
        }
        return c;
    }
};