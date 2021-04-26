#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int minOperations(vector<int>& nums) {
        int cnt=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>=nums[i]){
                int diff = nums[i-1] - nums[i] + 1;
                cnt += diff;
                nums[i] += diff;
            }
        }
        return cnt;
    }
int main(){
    vector<int> num;
    num.push_back(1);
    num.push_back(10);
    num.push_back(9);
    num.push_back(4);
    num.push_back(4);
    num.push_back(2);
    num.push_back(3);
    cout<<minOperations(num)<<endl;
    return 0;
}