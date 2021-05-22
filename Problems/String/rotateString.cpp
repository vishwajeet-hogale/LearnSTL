#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    bool rotateString(string s, string goal) {
        int cnt =0;
        int N = s.length();
        if(!s.length() && !goal.length())
            return true;
        while(cnt<N){
            if(s.compare(goal) == 0){
                return true;
            }
            
            
            char c = s[0];
            for(int i=1;i<N;i++){
                s[i-1] = s[i];
            }
            s[N-1] = c;
            cnt++;
            
            
        }
        
        
        return false;
    }
};
int main(){
    vector<int> nums;
    string st="abcde",goal ="cdeab";
    Solution s;
    cout<<s.rotateString(st,goal)<<endl;
    return 0;
}