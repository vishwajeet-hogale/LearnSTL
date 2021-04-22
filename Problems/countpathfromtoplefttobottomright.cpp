/*
Counts the number of paths from the top left corner of the grid
to the bottom right corner of the grid
*/


#include<iostream>
#include<bits/stdc++.h>
#define M 3
using namespace std;
int grid [M][M] = {
    {0,-1,-1},
    {0,-1,-1},
    {0,0,1}};
int checkValidSquare(int row,int col){
    if(row<M && col <M){
        if(grid[row][col]==0){
            return 1;
        }
        else if(grid[row][col] == -1){
            return 0;
        }
    }
    else{
        return 0;
    }
}
int checkEndGrid(int row,int col)
{
    if(grid[row][col] == 1){
        return 1;
    }
    return 0;
}
int count_path(int row,int col)
{
    if(!checkValidSquare(row,col))
        return 0;
    if(checkEndGrid(row,col))
        return 1;
    return count_path(row+1,col) + count_path(row,col+1);
    
}

int main(){
    cout<<count_path(0,0)<<endl;
    return 0;
}