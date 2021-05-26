#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int findPeakElement(vector<int> &nums)
{
    int i;
    for (i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] > nums[i + 1])
        {
            break;
        }
    }
    return i;
}
int main()
{
    vector<int> nums({1, 1, 3, 4, 5, 2});
    cout << findPeakElement(nums) << endl;
    return 0;
}