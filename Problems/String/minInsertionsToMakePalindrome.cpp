#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int LCSDP(string s){
        int n= s.length();
        string rev_s = s;
        reverse(rev_s.begin(),rev_s.end());
        
        int m = n;
        int dp[505][505];
        for(int i=0;i<=n;i++)
            dp[i][0] = 0;
        for(int i=0;i<=n;i++)
            dp[0][i] = 0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(s[i-1] == rev_s[j-1])
                    dp[i][j] = 1 + dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return n-dp[n][m];
        
           
        
    }
    int minInsertions(string s) {
        return LCSDP(s);
    }
};