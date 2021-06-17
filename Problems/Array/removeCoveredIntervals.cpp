#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int cnt = 0;
        // sort(intervals.begin(),intervals.end(),cmp);
        int n = intervals.size();

        for(int i=0;i<n;i++){
           
            for(int j=0;j<n;j++){
         
                if(i!=j && intervals[j][0]<=intervals[i][0] && intervals[i][1] <= intervals[j][1]){
                   
                       

                        cnt++;
                    break;
                    
                }
            }
        }
        return n-cnt;
    }
};