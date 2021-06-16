#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool getSets(vector<int> &nums,vector<int> &r,int i){
    if(i == nums.size()){
        
        return !r[0] && !r[1] && !r[2] && !r[3];
    }
    for(int j=0;j<r.size();j++){
        r[j] -= nums[i];
        if(getSets(nums,r,i+1)){
            return true;
        }
        r[j] += nums[i];
    }
    return false;
}
bool makesquare(vector<int> &nums){

    int sum = 0;
    
    for(int i:nums)
        sum += i;
    if(sum % 4 == 0){
        vector<int> r(4,sum/4);
        return getSets(nums,r,0);
    }
    return false;
}
int main(){
    vector<int> nums({1,1,2,2,1});
    cout<<makesquare(nums)<<endl;
    return 0;
}