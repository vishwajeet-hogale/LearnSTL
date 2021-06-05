#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseVowels(string s) {
    
        stack<char> st;
        unordered_set<char> m({'a','e','i','o','u','A','E','I','O','U'});
        for(char c:s){
            if(m.find(c) != m.end())
                st.push(c);
        }
        int i = 0;
        for(char c:s){
            if(m.find(c) != m.end()){
                s[i] = st.top();
                st.pop();
                
            }
            i++;
        }
        return s;
    }
};