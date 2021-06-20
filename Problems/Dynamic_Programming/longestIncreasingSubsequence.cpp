#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
#include<math.h>
using namespace std;
int LCSDP(vector<int> &nums,int n){

    
     vector<int> dp(n,1);
   int ans=1;
   for(int i=1;i<n;i++)
   {
       
       for(int j=0;j<i;j++)
       {
           if(nums[i]>nums[j])
           dp[i] = max(dp[i],dp[j]+1);
       }
       
       ans = max(ans,dp[i]);
   }
   
   
   
   return ans;
}
int main(){
    vector<int> nums({0,8,4,12,2,10,6,14,1,9,5,13,3,11,7,15});
   
    cout<<LCSDP(nums,nums.size())<<endl;
    return 0;
}