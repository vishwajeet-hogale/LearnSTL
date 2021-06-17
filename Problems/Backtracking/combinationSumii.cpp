#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int cmp(int a,int b){
    return a>b;
}
class Solution {
public:
    vector<vector<int>> res;
    void getNumbers(vector<int> nums,vector<int> &r,int i,int target){
        if(target == 0){
            if(find(res.begin(),res.end(),r) == res.end())
                res.push_back(r);
            
            return;
        }
        while(i<nums.size() && target-nums[i] >= 0){

            r.push_back(nums[i]);
            getNumbers(nums,r,i+1,target-nums[i]);
            i++;
            r.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        int sum = 0;
        for(int i=0;i<candidates.size();i++){
            sum += candidates[i];
        }
        if(sum < target)
            return res;
        vector<int> r;
        sort(candidates.begin(),candidates.end());
        getNumbers(candidates,r,0,target);
        return res;
    }
};