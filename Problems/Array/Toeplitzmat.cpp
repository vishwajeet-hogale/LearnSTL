#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for(int i=1;i<matrix.size();i++)        // skip 1st row
            for(int j=1;j<matrix[0].size();j++) // skip 1st element of all rows
                if(matrix[i-1][j-1]!=matrix[i][j])
                    return false;
        return true;
    }
};