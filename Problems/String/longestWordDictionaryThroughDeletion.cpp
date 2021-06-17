#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    static bool cmp(const string&a,const string&b)
    {
        if((int)a.size()!=(int)b.size())
        {
            return ((int)a.size()<(int)b.size());
        }
        else
        {
            return a>b;
        }
    }
    string getSubsequence(string x,string y){
        int i = 0,j = 0;int len = 0;
        while(i<x.length() && j <y.length()){
            if(x[i] == y[j]){
                len++;
                i++;
                j++;
                
            }
            else
                i++;
        }
        if(len == y.length())
            return y;
        return "";
    }
    string findLongestWord(string s, vector<string>& dictionary) {
        int mlen = 0,pos=0,x=0;
        sort(dictionary.begin(),dictionary.end(),cmp);
        for(string i:dictionary){
           string len = getSubsequence(s,i);
            if(len.length()){
                if(mlen<=len.length()){
                    mlen = len.length();
                    pos =x;
                }
                }
            x++;
        }
        if(mlen == 0)
            return "";
        return dictionary[pos];
    }
};