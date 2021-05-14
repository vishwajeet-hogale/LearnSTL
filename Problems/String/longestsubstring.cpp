#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
         map<char,int> mp;
        int n=s.size(),j=0,ans=1,i;
        if(n==0)
            return 0;
        for( i=0;i<n;i++){
            if(mp.find(s[i])!=mp.end()){
                j=max(j,mp[s[i]]+1);
            }
            mp[s[i]]=i;
            ans=max(i-j+1,ans);
        }
        return ans;
    }
int main(){
    string s = "bchcbjcbhjbj";
    cout<<lengthOfLongestSubstring(s)<<endl;
    return 0;
}