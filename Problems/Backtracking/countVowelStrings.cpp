#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void helper(string &s,vector<string> &vowels,int start,int n,int &c){
        if(s.length() == n){
            c++;
            cout<<s<<endl;
            return;
        }
        for(int i=start;i<vowels.size();i++){
            s += vowels[i];
            helper(s,vowels,start,n,c);
            start++;
            s.pop_back();
        }
    }
    int countVowelStrings(int n) {
        int c =0;
        vector<string> vowels;
        vowels.push_back("a");
        vowels.push_back("e");
        vowels.push_back("i");
        vowels.push_back("o");
        vowels.push_back("u");
        string s = "";
        int start = 0;
        helper(s,vowels,start,n,c);
        return c;
    }
};
int main(){
    Solution s;

    cout<<s.countVowelStrings(6)<<endl;
    return 0;
}