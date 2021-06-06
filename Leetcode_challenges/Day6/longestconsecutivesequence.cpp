#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        else if(nums.size() == 1)
            return 1;
        sort(nums.begin(),nums.end());
        int c =0;
        int m =0,i;
        for(i=0;i<nums.size()-1;i++){
            
            if(nums[i+1]-nums[i] == 1){
                c++;
                cout<<nums[i]<<endl;
                
            }
            else if(nums[i+1]-nums[i] >1 ){
                 
                
                c = 0;
            }
            if(c+1>m){
                    m = c+1;
                }
            
        }
        
        return m;
    }
};