#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int removeInstance(vector<int> &nums,int val){
    int l =0;
    for(int i=0;i<nums.size();i++){
        if(nums[i] != val){
            nums[l] = nums[i];
            l++;
        }
    }
    return l;
}
int main(){
    vector<int>nums;
    nums.push_back(10);
    nums.push_back(10);
    nums.push_back(10);
    nums.push_back(10);
    nums.push_back(10);
    nums.push_back(12);
    cout<<removeInstance(nums,10)<<endl;
    return 0;
}