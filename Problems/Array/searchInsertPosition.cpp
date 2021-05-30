#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    int pos = -1;

public:
    int helper(vector<int> &nums, int target, int start, int end)
    {
        while (start <= end)
        {
            int mid = (start + end) / 2;
            if (target > nums[mid])
            {
                start = mid + 1;
            }
            else if (target < nums[mid])
            {
                end = mid - 1;
            }
            else
                return mid;
        }
        return start;
    }
    int searchInsert(vector<int> &nums, int target)
    {
        pos = helper(nums, target, 0, nums.size() - 1);

        return pos;
    }
};