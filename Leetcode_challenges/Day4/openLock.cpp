#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        int level = 0;
        unordered_set<string> deads(deadends.begin(),deadends.end());
        unordered_set<string> vis;
        queue<string> q;
        q.push("0000");
        while(!q.empty()){
            int size = q.size();
            for(int i=0;i<size;i++){
                string curr = q.front();
                q.pop();
                if(curr == target) return level;
                if(deads.find(curr) != deads.end() || vis.find(curr) != vis.end())
                    continue;
                vis.insert(curr);
                findset(curr,q);
            }
            level++;
        }
        return -1;
    }
    void findset(string curr,queue<string>&q){
        for(int i=0;i<4;i++){
            char c = curr[i];
            curr[i] = (c - '0' + 1)%10 + '0';
            q.push(curr);
            curr[i] = (c-'0' - 1+10)%10 + '0';
            q.push(curr);
            curr[i] = c;
        }
    }
};