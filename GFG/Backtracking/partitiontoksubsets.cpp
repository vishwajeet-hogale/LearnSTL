#include <iostream>
#include <bits/stdc++.h>
using namespace std;
map<int, bool> m;
void subset(vector<int> &nums, int K, int i, vector<vector<int>> &res, vector<int> &r, int target)
{
    if (target == 0)
    {

        res.push_back(r);

        K++;
        return;
    }

    while (i < nums.size() && target - nums[i] >= 0)
    {

        r.push_back(nums[i]);
        subset(nums, K, i + 1, res, r, target - nums[i]);
        i++;
        r.pop_back();
    }
}
void partitionKSubsets(vector<int> &nums, int k)
{
    int range = 0;
    vector<vector<int>> res;
    vector<int> r;
    for (int i : nums)
    {

        range += i;
    }
    if (range % k == 0)
    {
        subset(nums, k, 0, res, r, range / k);
        vector<vector<int>> soln;
        for (vector<int> j : res)
        {
            int f = 1;
            for (int x : j)
            {
                // if (m.find(x) == m.end())
                // {
                //     m[x] = true;
                // }
                // else
                // {
                //     f = 0;
                //     break;
                // }
                cout << x << " ";
            }
            // if (f)
            //     for (int k : j)
            //         cout << k << " ";
            cout << endl;
        }
    }
    else
    {
        cout << "Not possible" << endl;
    }
}
int main()
{
    vector<int> nums({2, 1, 5, 5, 6});
    int k = 3;
    partitionKSubsets(nums, k);
    return 0;
}
