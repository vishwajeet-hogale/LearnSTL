#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int rob(vector<int>& nums) {
        int dp[101] ={ 0};
        if(nums.size() == 1)
            return nums[0];
        else if(nums.size() == 2)
            return max(nums[0],nums[1]);
        dp[0] = nums[0];
        dp[1] = max(nums[0],nums[1]);
        int res1 = 0;
        for(int i=2;i<nums.size()-1;i++){
            dp[i] =  max(dp[i-1],nums[i] +dp[i-2]);
        }
         res1 = max(dp[nums.size()-2],dp[nums.size()-3]);
        dp[1] = nums[1];
        dp[2] = max(nums[1],nums[2]);
        int res2 = 0;
        for(int i=3;i<nums.size();i++){
            dp[i] =  max(dp[i-1],nums[i] +dp[i-2]);
        }
        res2 = max(dp[nums.size()-1],dp[nums.size()-2]);
        return max(res1,res2);
    }
};