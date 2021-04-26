#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        if(nums.size()>=k){
            return nums[nums.size()-k];
            
        }
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
    cout<<findKthLargest(num,4)<<endl;
    return 0;
}