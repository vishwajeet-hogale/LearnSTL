#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int jump(vector<int>& nums) {
        int L = 0,R = 0;int res = 0;
        while(R<nums.size()-1){
            int farthest = 0;
            for(int i=L;i<R + 1;i++){
                farthest = max(farthest,i+nums[i]);
            }
            L = R + 1;
            R = farthest;
            res++;
        }
        return res;
    }
};