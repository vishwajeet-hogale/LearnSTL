#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void all_subsets(vector<int> &r, vector<int> &nums, int i)
{
    cout << "(";
    for (int i = 0; i < r.size(); i++)
    {
        cout << r[i] << " ";
    }
    cout << ")" << endl;
    while (i < nums.size())
    {
        r.push_back(nums[i]);
        all_subsets(r, nums, i + 1);
        i++;
        r.pop_back();
    }
}
int main()
{
    vector<int> nums({1, 2, 2});
    vector<int> r;
    all_subsets(r, nums, 0);
    return 0;
}