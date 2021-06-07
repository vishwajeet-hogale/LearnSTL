#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dp[101][1000] ={0};
    int validPlace(int i,int j,vector<vector<int>>& obstacleGrid,int N,int M){
        return i>=0 && i<N && j>=0 && j<M && obstacleGrid[i][j] == 0;
    }

    int dfs(int N,int M,vector<vector<int>>& obstacleGrid,vector<vector<int>> &vis,int i,int j){
        if(!validPlace(i,j,obstacleGrid,N,M))
            return 0;
        if(dp[i][j] != 0)
            return dp[i][j];
        if(i == obstacleGrid.size()-1 && j == obstacleGrid[0].size()-1){

            return 1;
        }
        
        dp[i][j] =  dfs(N,M,obstacleGrid,vis,i+1,j) + dfs(N,M,obstacleGrid,vis,i,j+1);
        return dp[i][j];
        
          
        
        
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>> vis(obstacleGrid.size(),vector<int>(obstacleGrid[0].size(),0));
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        int f = dfs(n,m,obstacleGrid,vis,0,0);
        
        return f;
    }
};