#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Recursive approach
class Solution {
public:
    bool div(int n,int f){
        if(n==1 && f==1)
            return false;
        else if(n==1 && f==0)
            return true;
        return div(n-1,!f);
    }
    bool divisorGame(int n) {
        return div(n,1);
    }
};
// Approach 2 
class Solution {
public:
    
    bool divisorGame(int n) {
        return n%2 ==0;
    }
};