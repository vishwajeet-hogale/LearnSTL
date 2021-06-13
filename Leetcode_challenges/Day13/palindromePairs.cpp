#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int check(string x){
        string y = x;
        reverse(y.begin(),y.end());
        return !y.compare(x);
    }
    vector<vector<int>> palindromePairs(vector<string>& words) {
        map<string,int> m;
        vector<vector<int>> res;
        int i =0;
        for(string g:words){
            m[g] = i;
            i++;
        }
        //case 1 : empty string + palindromic string
        if(m.find("") != m.end()){
            int index = m.find("")->second;
            for(int i=0;i<words.size();i++){
                if(i != index && check(words[i])){
                    res.push_back({index,i});
                    res.push_back({i,index});
                }
            }
        }
        //case 2 : palindrome 1 + reverse(palindrome 1 in m)
        for(int i = 0;i<words.size();i++){
            string s = words[i];
            reverse(s.begin(),s.end());
            if(m.find(s) != m.end()){
            int j = m[s];
            if(j != i){
                res.push_back({i,j});
            }
            }
        }
        //case 3 : palindrome_left + right = reverse(word)= right
        for(int i=0;i<words.size();i++){
            string cur = words[i];
            for(int slice = 1;slice<cur.length();slice++){
                string left = cur.substr(0,slice);
                string right = cur.substr(slice);
                if(check(left)){
                    string rev_right = right;
                    reverse(rev_right.begin(),rev_right.end());
                    if(m.find(rev_right) != m.end())
                        res.push_back({m[rev_right],i});
                }
                if(check(right)){
                    string rev_left = left;
                    reverse(rev_left.begin(),rev_left.end());
                    if(m.find(rev_left) != m.end())
                        res.push_back({i,m[rev_left]});
                }
            }
        }
        return res;
    }
};