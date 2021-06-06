#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> grid({
    {1,1,1},
    {1,0,1},
    {1,1,1}
});
// Recursive solution 
bool valid(int i,int j){
    return i>=0 && i<grid.size() && j>=0 && j<grid[0].size() && grid[i][j] == 1 ;
}
// int numberOfWays(int i,int j){
//     if(!valid(i,j)){
//         return 0;
//     }
//     if(i == grid.size()-1 && j == grid[0].size()-1){
//         return 1;
//     }
//     return numberOfWays(i+1,j) + numberOfWays(i,j+1);
// }
// Memoization involved : Overlapping subsets and optimal substructure property 
// is satisfied and hence DP should be used
vector<vector<int>> dp(grid.size(),vector<int>(grid[0].size(),-1));
int numberOfWays(int i,int j){
    if(!valid(i,j)){
        return 0;
    }
    if(dp[i][j] != -1){
        return dp[i][j];
    }
    if(i == grid.size()-1 && j == grid[0].size()-1){
        return 1;
    }
    dp[i][j] =  numberOfWays(i+1,j) + numberOfWays(i,j+1);
    return dp[i][j];
}

int main(){
    cout<<numberOfWays(0,0)<<endl;
    return 0;
}