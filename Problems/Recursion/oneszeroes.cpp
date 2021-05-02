#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int dp[101][101][601];
    int count(string s)
    {
        int z = 0 ;
        for(int i =0 ;i<s.size();i++)
        {
            if(s[i] == '0')z++;
        }
        return z;
    }
    int solve(vector<string>&s,int zero,int one,int start)
    {
        // base case
        if(start >= s.size() || zero<0 || one< 0)return 0;
        if(zero == 0 && one == 0)return 0;
        
        if(dp[zero][one][start]!= -1)return dp[zero][one][start];
        int i = start ;
        //count the no. of 0's;
        int zeros = count(s[i]);
        int ones = s[i].size() - zeros;
        // if ones and zeros are valid
        // its your choice to include in ans or not
        if(zero >= zeros && one >= ones)
        {
          return dp[zero][one][start]= max(1 + solve(s,zero-zeros,one-ones,i+1) , solve(s,zero,one,i+1)); 
        }
        else
               dp[zero][one][start]=solve(s,zero,one,i+1);
        return dp[zero][one][start];
      
    }
    int findMaxForm(vector<string>& s, int zero, int one) {
        int  n = s.size();
        memset(dp,-1,sizeof(dp));
        return solve(s,zero,one,0);
        
    }
int main(){
    vector<string> num;
    num.push_back("10");
    num.push_back("0");
    num.push_back("1");
    cout<<findMaxForm(num,2,1)<<endl;


    return 0;
}