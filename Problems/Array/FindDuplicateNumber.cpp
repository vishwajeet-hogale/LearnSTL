#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int flag = -1;
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
                flag =  nums[i];
            }
        }
        return flag;
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
    cout<<findDuplicate(num)<<endl;
    return 0;
}