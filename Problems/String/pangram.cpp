#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool checkIfPangram(string sentence)
    {
        vector<int> m(26, 0);
        for (char c : sentence)
            m[c - 'a']++;
        for (int &i : m)
            if (!i)
                return false;
        return true;
    }
};