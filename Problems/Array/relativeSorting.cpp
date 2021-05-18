#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> res;
        int i=0,j=0;
        map<int,int> m;
        for(int &i:arr1){
            if(m.find(i) != m.end())
                m[i]++;
            else
                m[i] = 1;
            
        }
        for(int i=0;i<arr2.size();i++){
            for(int j=0;j<m[arr2[i]];j++){
                res.push_back(arr2[i]);
            }
            m.erase(arr2[i]);
        }
        for(auto &x:m){
            for(int j=0;j<x.second;j++){
                res.push_back(x.first);
            }
            m.erase(x.first);
        }
        return res;
    }
};