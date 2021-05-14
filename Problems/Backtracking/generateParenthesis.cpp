#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<string> res;
void generateAll(string s,int open,int close){
    if(open == 0 && close == 0){
        res.push_back(s);
        return;
    }
    if(open > 0){
        s.push_back('(');
        generateAll(s,open-1,close);
        s.pop_back();

    }
    if(close > 0){
        if(open<close){
            s.push_back(')');
            generateAll(s,open,close-1);
            s.pop_back();
        }
    }
}
vector<string> generateParenthesis(int n) {
    
    string start =""; // empty string to build all strings 
    generateAll(start, n, n);  
    
    return res;
}
int main(){
    vector<string> res1 = generateParenthesis(5);
    for(string s:res1){
        cout<<s<<endl;
    }
    return 0;
}