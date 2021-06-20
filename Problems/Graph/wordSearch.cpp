#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    vector<vector<int>> dir {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    vector<vector<char>> grid;
    bool dfs(string word, int r, int c, int i, int j, int w) {
        if(w >= word.length()) return true;
        if(i < 0 || j < 0 || i >= r || j >= c || grid[i][j] != word[w]) return false;
        grid[i][j] = '#';
        for(int d = 0; d < dir.size(); d++) {
            if (dfs(word, r, c, i + dir[d][0], j + dir[d][1], w + 1)) return true;
        }
        grid[i][j] = word[w];
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int r = board.size();
        int c = board[0].size();
        grid = board;
        
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(dfs(word, r, c, i, j, 0)) return true;
            }
        }
        return false;
    }
};