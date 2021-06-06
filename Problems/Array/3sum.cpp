#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> sol;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int l = i+1;
            int r = nums.size()-1;
            while(l<r){
                int sum = nums[i]+nums[l]+nums[r];
                if(sum == 0){
               
                    vector<int> temp({nums[i],nums[l],nums[r]});
                    sol.insert(temp);
                    l++;
                    r--;
                }
                else if(sum < 0)
                    l++;
                else 
                    r--;
            }
        }
        vector<vector<int>> res(sol.begin(),sol.end());
        return res;
    }
        
    
};