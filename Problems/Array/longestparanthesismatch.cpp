#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool check(string s){
    stack<char> s1;
    for(char c:s){
        if(c == '('){
            s1.push('(');
        }
        else if(c == ')' && !s1.empty()){
            s1.pop();
        }
        else{
            return false;
        }
    }
    return s1.empty();
}
int getMax(string s){
    int max = 0;
    for(int i=0;i<s.length();i++){
        for(int j = i +1 ;j<s.length();j++){
            string s2 = s.substr(i,j);
            if(check(s2) && s2.length() >=2){
                int c = s.substr(i,j).length();
                if(c > max){
                    max = c;
                }
            }
        }
    }
    return max;
}
int main(){
    string s = ")()()";
    cout<<getMax(s)<<endl;
}