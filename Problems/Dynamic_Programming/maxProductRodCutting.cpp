#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int dp[401] = {-1};
//Recursion + memoization 

int maxProdRodCut(int n){
    if(n==2){
        return 1;
    }
    int m = 0;
    for(int i=1;i<n;i++){
        int prod = i*max(n-i,maxProdRodCut(n-i));
        if(prod>m){
            m = prod;
        }
    }
    return m;
}
int main(){
    cout<<maxProdRodCut(10)<<endl;
    return 0;
}







