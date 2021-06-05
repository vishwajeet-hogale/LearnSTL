#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> grid({
    {2,3,4},
    {5,0,7},
    {8,9,1}
});

/*
Idea behind this problem is as folows : 

-> Minimum cost to reach pos(0,1) = pos(0,0) 
You can reach pos(0,0) only from the cell to the left of pos(0,1).
But to reach pos(1,1), you ahve to see the minimum path travelled 
above and toeards the left of cell (1,1). 
Here we have to make a choice between left and top. 
Taht's how to minimze at every cell where there is a choice for us to take
In thhis case the choice is to minimize the distance travelled so far and 
continue to do so until we reach the end of the cell.
*/
int minCostPath(){
    vector<vector<int>> dp(grid.size(),vector<int>(grid[0].size(),0));
    dp[0][0] = grid[0][0];
    for(int i=1;i<grid[0].size();i++){
        dp[0][i] = dp[0][i-1] + grid[0][i];
    }
     for(int i=1;i<grid.size();i++){
        dp[i][0] = dp[i-1][0] + grid[i][0];
    }
    for(int i=1;i<grid.size();i++){
        for(int j=1;j<grid[0].size();j++){
            dp[i][j] = grid[i][j] + min(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[grid.size()-1][grid[0].size()-1];
}
int main(){
    cout<<minCostPath()<<endl;
    return 0;
}