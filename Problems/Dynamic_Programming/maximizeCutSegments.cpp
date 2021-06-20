#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int maximizeCuts(vector<int> &nums,int target){
    int dp[401][401] = {-1};
    int n= nums.size();
    for(int i=0;i<=n;i++){
        dp[i][0] = 1;
    }
    for(int i=1;i<=target;i++){
        dp[0][i] = 0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=target;j++){
            if(j == 0)
                dp[i][j] = 1;
            if(i ==0)
                dp[i][j] = 0;
            if(j>=nums[i-1]){
                dp[i][j] = max(dp[i-1][j],1+dp[i][j-nums[i-1]]);
            }
            else if(nums[i-1] > j){
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][target]-1;
}
int main(){
    vector<int> nums({8,4,2});
    cout<<maximizeCuts(nums,8)<<endl;
    return 0;
}