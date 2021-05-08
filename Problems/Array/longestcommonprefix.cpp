#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int longestCommonPrefix(vector<string> &strings){
    int update = 1;
    int cnt = 0;
    for(int i=0;i<strings[0].size();i++){
        // cout<<strings[0].substr(0,update)<<endl;
        for(string &x:strings){
            if(strings[0].substr(0,update).compare(x.substr(0,update)) != 0){
                return cnt;
            }
        }
        update++;
        cnt++;
    }
    return cnt;
}
int main(){
    vector<string> strings;
    strings.push_back("spot");
    strings.push_back("spotty");
    strings.push_back("spotted");
    cout<<longestCommonPrefix(strings)<<endl;
    return 0;
    
}