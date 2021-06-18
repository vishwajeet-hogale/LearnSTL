#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int start = 0;
        int end = 0;
        int res = 0;int window = 0,prev_window = 0;
        for(int end =0;end<nums.size();end++){
    
            if(nums[end] >= left && nums[end] <=right){
                window = end-start+1;
            }
            else if(nums[end] < left)
                window = window;
            else if(nums[end] > right){
                window = 0;
                start = end+1;
            }
            res += window;
            
        }
        return res;
       
    }
};