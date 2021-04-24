#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isSubsequence(string s, string t) {
        int k =0;
        for(int i=0;i<t.length();i++){
            if(t[i] == s[k]){
                k++;
            }
        }
        if(k==s.length())
            return true;
        return false;
    }
int main(){
    cout<<"s = \"abc\" a subsequence of \"ahgvbbjkc\" ?\n"<<isSubsequence("abc","ahgvbbjkc")<<endl;
    return 0;
}