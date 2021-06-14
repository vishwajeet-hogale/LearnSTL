#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int cmp(vector<int> &a,vector<int>&b){
    return a[1]>b[1];
}
class Solution {
public:
    int m = 0;
    
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),cmp);
        int total = 0;
        for(vector<int>j : boxTypes){
            int used = min(j[0],truckSize);
            truckSize -= used;
            total += used * j[1];
        }
        return total;
    }
};