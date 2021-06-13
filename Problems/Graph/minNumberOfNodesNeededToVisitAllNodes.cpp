#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
// First converting it into a adjacency matrix is time consuming and it gives TLE
    // vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
    //     vector<int> m;
    //     vector<vector<int>> graph(n,vector<int>(n,0));
    //     for(vector<int> temp:edges){
    //         graph[temp[0]][temp[1]] = 1;
    //     }
    //     for(int i=0;i<n;i++){
    //         int f = 0;
    //         for(int j=0;j<n;j++){
    //             if(j!=i){
    //                 if(graph[j][i]){
    //                     f = 1;
    //                 }
    //             }
    //         }
    //         if(f == 0){
    //             m.push_back(i);
    //         }
    //     }
    //     return m;
    
    // }

// After eliminating making of the adjacency matrix : The approach works 
// The approach is to count the nodes that don't have any incoming edge.
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        map<int,int> m;
        vector<int> res;
        for(auto &x:edges){
            if(m.find(x[1]) == m.end()){
                m[x[1]] = 1;
            }
            else
            m[x[1]]++;
        }
        for(int i=0;i<n;i++){
            if(m.find(i) == m.end())
                res.push_back(i);
        }
        return res;
    }
};