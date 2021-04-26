#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        if(nums.size()>2)
            return nums[nums.size()-3];
        return nums[nums.size()-1];
            
        
    }
int main(){
    vector<int> num;
    num.push_back(1);
    num.push_back(10);
    num.push_back(9);
    num.push_back(4);
    num.push_back(2);
    num.push_back(3);
    cout<<thirdMax(num)<<endl;
    return 0;
}