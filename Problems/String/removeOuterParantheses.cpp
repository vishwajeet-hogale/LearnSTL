#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeOuterParentheses(string s) {
        string g= "";
        int open = 0;
        for(char c:s){
            if(c == '(' && open++ > 0) 
                g += '(';
            if(c == ')' && open-- > 1)
                g += ')';
        }
        return g;
    }
};