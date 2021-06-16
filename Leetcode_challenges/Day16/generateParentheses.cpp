#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<string> res;
void helper(int open,int close, string s){
    if(open==close && close == 0){
        cout<<s<<endl;
        res.push_back(s);
        return;
    }
    if(open > 0)
        helper(open-1,close,s+')');
    if(open<close){
        helper(open,close-1,s+')');
    }
}
vector<string> generateParenthesis(int n) {
        string s = "";
        helper(n,n,s);
        return res;
}