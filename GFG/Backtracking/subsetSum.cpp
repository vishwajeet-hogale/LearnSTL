#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool subsetSum(vector<int> &nums, int target, int i)
{
    if (target == 0)
    {
        return true;
    }
    if (i == 0)
    {
        return false;
    }
    if (target > nums[i])
    {
        return subsetSum(nums, target - nums[i - 1], i - 1) || subsetSum(nums, target, i - 1);
    }
    return false;
}