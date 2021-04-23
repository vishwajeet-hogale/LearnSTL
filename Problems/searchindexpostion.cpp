#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int f = -1;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == target){
                f = i;
                break;
            }
            if(nums[i]>target){
                f = i;
                break;
            }
        }
        if(f == -1){
            return nums.size();
        }
        return f;
    }
};