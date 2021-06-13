#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void getFloydWarshalMatrix(vector<vector<int>> &graph,int n){
        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i == k || j == k)
                        continue;
                    if(i == j)
                        graph[i][j] = 0;
                    if(graph[i][k]!=INT_MAX && graph[k][j] != INT_MAX)
                        graph[i][j] = min(graph[i][j],graph[i][k]+graph[k][j]);
                }
            }
        }
    }
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<int>> graph(n,vector<int>(n,INT_MAX));
        for(vector<int> temp:edges){
            graph[temp[0]][temp[1]] = temp[2];
            graph[temp[1]][temp[0]] = temp[2];
            
        }
        getFloydWarshalMatrix(graph,n);
        
        int m = INT_MAX;int res = -1;
        for(int i=0;i<n;i++){
            int c =0;
            for(int j=0;j<n;j++){
                if(graph[i][j] <= distanceThreshold && graph[i][j] != 0){
               
                    c++;
                }
            }
            if(c <= m){
                m= c;
                res = i;
            }
            
        }
        return res;
    }
};