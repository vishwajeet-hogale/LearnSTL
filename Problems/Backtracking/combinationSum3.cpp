#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> res;
    void findNumbers(vector<int> &nums,vector<int> &r,int target,int i,int k){
        if(target == 0 && r.size() == k){
            res.push_back(r);
            return;
        }
        while(i<nums.size() && target-nums[i] >= 0){
            r.push_back(nums[i]);
            findNumbers(nums,r,target-nums[i],i+1,k);
            i++;
            r.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums({1,2,3,4,5,6,7,8,9});
        vector<int> r;
        findNumbers(nums,r,n,0,k);
        return res;
    }
};