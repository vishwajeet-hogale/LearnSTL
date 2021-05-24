#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void helper(vector<vector<int>> &res, vector<int> &r, int i, vector<int> &nums)
{
    if (i == nums.size())
    {
        cout << "(";
        for (int &j : nums)
        {
            cout << j << " ";
        }
        cout << ")" << endl;
        res.push_back(nums);
        return;
    }
    for (int j = i; j < nums.size(); j++)
    {
        swap(nums[i], nums[j]);
        helper(res, r, i + 1, nums);
        swap(nums[i], nums[j]);
    }
}
int main()
{
    vector<int> r, nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    vector<vector<int>> res;
    helper(res, r, 0, nums);
    return 0;
}