#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int max_dis = startFuel;
        int c = 0;
        stations.push_back({target,0});
        priority_queue<int> q;
        for(int i=0;i<stations.size();i++){
            while(!q.empty() && max_dis < stations[i][0]){
                c++;
                max_dis += q.top();
                q.pop();
            }
            if(max_dis<stations[i][0])
                return -1;
            q.push(stations[i][1]);
        }
        return c;
    }
};