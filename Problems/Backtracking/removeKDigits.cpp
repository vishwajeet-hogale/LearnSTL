#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

void helper(int start,string &num,vector<int> &r,long &min,int k){
        if(r.size() == k){
            string str = "";
            for(int i = 0;i<num.length();i++){
                // cout<<i<<endl;
                if(find(r.begin(),r.end(),i) == r.end()){
                    str += num[i];
                }
            }
            if(stol(str)<min){
                
                    min = stol(str);
            }
            // cout<<endl;
            return;
        }
        
        while(start<num.length()){
            r.push_back(start);
            helper(start+1,num,r,min,k);
            start++;
            r.pop_back();
        }
    }
    string removeKdigits(string num, int k) {
        vector<int> r;
        long min = LONG_MAX-1;
        if(num.length() == k){
            return "0";
        }
        helper(0,num,r,min,k);
        return to_string(min);
    }
    int main(){
        string num = "1432219";
        int k = 3;
        cout<<removeKdigits(num,k)<<endl;
        return 0;
    }

