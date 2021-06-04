#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
map<string,bool> dp;
bool wordBreak(string s,vector<string> &dict){
    if(s.length() == 0)
        return true;
    if(dp.find(s) != dp.end())
        return dp[s];
    for(string j:dict){
        string new_s = s.substr(0,j.length());
        if(new_s.compare(j)==0){
            if(wordBreak(s.substr(j.length()),dict)){
                dp[s] = 1;
                return true;
            }
        }
    }
    dp[s] = false;
    return false;
}