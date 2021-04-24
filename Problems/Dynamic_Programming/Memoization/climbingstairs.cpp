/*
You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int climb(int i,int n,vector<int> memo){
    if(i>n){
        return 0;
    }
    if(i == n){
        return 1;
    }
    if(memo[i]){
        return memo[i];
    }
    memo[i] = climb(i+1,n,memo) + climb(i+2,n,memo);
    // cout<<memo[i]<<"\n";
    return memo[i];
}
int climbing_stairs(int n){
    vector<int> memo(n,0);
    return climb(1,n,memo);

}
int main(){
    cout<<"Each time you can either climb 1 or 2 steps. \nIn how many distinct ways can you climb to the top?"<<endl<<climbing_stairs(20)<<endl;
    return 0;
}
