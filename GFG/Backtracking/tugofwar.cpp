#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int dp[100][100] = {-1};
int subSetSum(vector<int> &nums, int target)
{
    for (int i = 0; i <= nums.size(); i++)
    {
        dp[i][0] = 1;
    }
    for (int i = 1; i <= target; i++)
    {
        dp[0][i] = 0;
    }
    for (int i = 1; i <= nums.size(); i++)
    {
        for (int j = 1; j <= target; j++)
        {
            if (j == 0)
                return 1;
            if (j >= nums[i])
            {
                dp[i][j] = dp[i - 1][j - nums[i - 1]] || dp[i - 1][j];
            }
            else if (j < nums[i])
                dp[i][j] = dp[i - 1][j];
        }
    }
    return dp[nums.size()][target];
}
int tugofwarMinDiff(vector<int> &nums)
{
    int target = 0;
    for (int &j : nums)
    {
        target += j;
    }
    int x = subSetSum(nums, target);
    int min = INT_MAX;
    for (int i = 0; i <= target / 2; i++)
    {
        if (dp[nums.size()][i])
            if (target - 2 * i < min)
                min = target - 2 * i;
    }
    return min;
}