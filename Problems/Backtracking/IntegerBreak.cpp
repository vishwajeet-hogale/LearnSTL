#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 void find(vector<vector<int>>& res,vector<int> &r,int n,int i,int fin){
      
    if(n==0){
        res.push_back(r);
    }
    while(i<fin && n-i >=0){
        r.push_back(i);
        find(res,r,n-i,i,fin);
        i++;
        r.pop_back();
    }
}
vector<vector<int>> combinationSum(int n){
    vector<vector<int>> res;
    vector<int> r;
    find(res,r,n,1,n);
    return res;
}

int integerBreak(int n) {
    vector<vector<int>> r = combinationSum(n);
    int maximum = 0;
    int max_len = 0;
    int prod;
    for(int i = 0;i<r.size();i++){
        prod =1;
        cout<<"(";
        for(int &j:r[i]){
            cout<<j<<",";
                prod *= j;
        }
        cout<<")"<<endl;
        if(prod>maximum ){
            maximum = prod;
            max_len = r[i].size();
        }
            
    }
    return maximum;
}
int main(){
    int a = integerBreak(47);
    cout<<a<<endl;
    return 0;
}