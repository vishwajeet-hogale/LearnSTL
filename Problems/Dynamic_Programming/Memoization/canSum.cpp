/* 
Write a function 'canSum (int targetSum,numbers)' that takes in a target sum and array of numbers as arguments.

The function should return a boolean  indicating whether or not it is possible to generate teh targetSUm usign numbers
from the array. 

Memoized solution is given below because this can be a dynamic solution as the tree for this problem has repeated branch nodes whichj 
can be reused by applying memoization.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool canSum(int target,vector<int> &nums,map<int,bool> &m){
    if(target == 0){
        return true;
    }
    if(target<0){
        return false;
    }
    if(m.find(target) != m.end()){
        return m[target];
    }
    for(int i=0;i<nums.size();i++){
        cout<<target-nums[i]<<endl;
        if(canSum(target-nums[i],nums,m) == true){
            m[target]= true;
        }
    }
    m[target] = false;
    return false; 


}
int main(){
    vector<int> n;
    map<int,bool> m;
    n.push_back(7);
    n.push_back(14);
    
    cout<<"Can the sum be 7 = "<<canSum(300,n,m)<<endl;
    return 0;
}