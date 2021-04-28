#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isSubsequence(string s, string t) {
        int i=0, j=0;
        int sum;
        vector<int>visited(s.length());
        while(i < t.length() && j < s.length()){
            if(s[j] == t[i]){
                visited[j] = 1;
                j++;
            }
            i++;
        }
        for(int i=0; i<visited.size(); i++){
            if(visited[i] != 1){
                return false;
            }
        }
        return true;
    }
int main(){
    cout<<"s = \"abc\" a subsequence of \"ahgvbbjkc\" ?\n"<<isSubsequence("abc","ahgvbbjkc")<<endl;
    return 0;
}