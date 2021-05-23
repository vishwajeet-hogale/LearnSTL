#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void getAllSubsetsOfArray(vector<int> &nums, vector<vector<int>> &res, vector<int> &r,int i){
    if(r.size()){
        res.push_back(r);
        
    }
    while(i<nums.size()){
        r.push_back(nums[i]);
        getAllSubsetsOfArray(nums,res,r,i+1);
        i++;
        r.pop_back();
    }
}
int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    vector<vector<int>> res;
    vector<int> r;
    getAllSubsetsOfArray(nums,res,r,0);
    for(int i=0;i<res.size();i++){
        cout<<"(";
        for(int &j:res[i]){
            cout<<j<<",";
        }
        cout<<")"<<endl;
    }
    return 0;
}