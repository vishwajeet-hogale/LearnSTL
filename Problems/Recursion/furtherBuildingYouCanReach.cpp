#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int max_pos = 0;
    int helper(vector<int>& heights, int bricks, int ladders,int i){
        if(bricks == 0 && ladders == 0){
            if(i > max_pos){
                max_pos = i;
            }
            return max_pos;
        }
        if(bricks< 0 || ladders < 0)
            return i-1;
        if(i == heights.size()-1)
            return i;
        if(heights[i+1]-heights[i]<0)
            return helper(heights,bricks,ladders,i+1);
        int diff = heights[i+1] - heights[i];
        
        return max(helper(heights,bricks-diff,ladders,i+1),helper(heights,bricks,ladders-1,i+1));
            
        
    }
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        if(bricks == 0 && ladders == 0){
            if(heights[1] - heights[0]<0)
                return 1;
            else
                return 0;
        }
       int j =  helper(heights,bricks,ladders,0);
        
        return j;
    }
};