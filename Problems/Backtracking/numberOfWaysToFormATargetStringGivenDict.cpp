#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int c = 0;
    void getCombinations(string target,string &r,string all,int i){
        if(!r.compare(target)){
            c++;
            // cout<<r<<endl;
            return;
        }
        while(i<all.length()){
            r.push_back(all[i]);
            cout<<r<<endl;
            getCombinations(target,r,all,i+1);
            i++;
            r.pop_back();
        }
    }
    int numWays(vector<string>& words, string target) {
        string all = "";
        for(string i:words){
            all += i;
        }
        string r;
        getCombinations(target,r,all,0);
        return c % 1000000007;
    }
};
int main(){
    vector<string> words({"acca","bbbb","caca"});
    string target = "aba";
    Solution s;
    cout<<s.numWays(words,target) <<endl;
    return 0;
}