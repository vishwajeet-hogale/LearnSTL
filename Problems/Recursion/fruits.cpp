#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int days(int n, unordered_map<int, int> &mp)
    {
        if (n == 0)
            return 0;

        if (mp.find(n) != mp.end())
            return mp[n];

        if (n % 2 == 0 && n % 3 == 0)
            return (mp[n] = 1 + min(days(n - (n / 2), mp), days(n - (2 * (n / 3)), mp)));

        if (n % 2 == 0)
            return (mp[n] = 1 + min(days(n - 1, mp), days(n - n / 2, mp)));
        if (n % 3 == 0)
            return (mp[n] = 1 + min(days(n - 1, mp), days(n - (2 * (n / 3)), mp)));

        return (mp[n] = 1 + days(n - 1, mp));
    }

    int minDays(int n)
    {

        unordered_map<int, int> mp;
        return days(n, mp);
    }
};
int main()
{
    Solution s;
    cout << s.minDays(100000) << endl;
    return 0;
}