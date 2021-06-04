#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkRecord(string s) {
        map<char,int> m;
        m['A'] = 0;
        m['L'] = 0;
        m['P'] = 0;
        int l =0;
        for(int i=0;i<s.length();i++){
            if(s[i] == 'P')
                continue;
            if(i<s.length()-3+1){
                for(l=i;l<i+3;l++)
                    if(s[l] == 'L')
                        m['L']++;
                if(m['L'] >=3)
                    return false;
                m['L'] = 0;
            }
            if(s[i] == 'A')
                m['A']++;
        }
        if(m['A'] >=2)
            return false;
        return true;
    }
};