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
    int numMatchingSubseq(string s, vector<string>& words) {
        int c =0;
        map<string,int> success;
        map<string,int> failure;
        
        for(int i=0;i<words.size();i++){
            if(success.find(words[i]) != success.end()){
                success[words[i]] += 1;
            }
            else if(failure.find(words[i]) != failure.end()){
                failure[words[i]] = 0;
            }
            else{
                if(isSubsequence(words[i],s)){
                    success[words[i]] = 1;
                }
                else{
                    failure[words[i]] = 0;
                }
            }
        }
        int s1 =0;
        for (auto &it : success)
        {
            s1 += int(it.second);
            // cout<<key<<val<<endl;
        }
        return s1;
    }
    int main(){
    vector<string> num;
    num.push_back("a");
    num.push_back("bb");
    num.push_back("ace");
    num.push_back("ade");
    string s = "abcde";
    cout<<"Number of subsequences = "<<numMatchingSubseq(s,num)<<endl;
    
    return 0;
}