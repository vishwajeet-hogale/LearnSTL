#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int cmp(pair<int,float> &a,pair<int,float> &b){
        return a.second < b.second;
    }
class Solution {
public:
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<int,float>> m;
        int x =0;
        for(vector<int> i:points){
            float res =sqrt(pow(i[0],2)+pow(i[1],2));
            m.push_back(make_pair(x,res));
            x++;
        }
        sort(m.begin(),m.end(),cmp);
        vector<vector<int>> res;
        for(int i=0;i<k;i++){
            
            
            res.push_back(points[m[i].first]);
            
        }
        return res;
    }
};