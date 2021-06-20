#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int minimizeCuts(vector<int> &nums,int target){
    vector<int> dp(target+1,target+1);
    dp[0] = 0;
    for(int i=1;i<=target;i++){
        
        for(int j=0;j<nums.size();j++){
            if(i>=nums[j]){
                dp[i] = min(dp[i],1+dp[i-nums[j]]);
            }
            
        }
    
    }
    return dp[target];
}
int main(){
    vector<int> nums({2,4,7});
    cout<<minimizeCuts(nums,8)<<endl;
    return 0;
}