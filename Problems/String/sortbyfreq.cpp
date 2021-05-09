#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<char, int>& a,
         pair<char, int>& b)
{
    return a.second > b.second;
}

string frequencySort(string s) {
    map<char,int> m;
    
    for(char c:s){
        if(m.find(c) == m.end()){
            m[c] =1 ;

        }
        else{
            m[c]++;
        }
    }
    vector<pair<char,int>> A;
    for(auto &x:m){
        A.push_back(x);
    }
    sort(A.begin(),A.end(),cmp);
    string st ="";
    for(auto &x:A){
        for(int i=0;i<x.second;i++){
            st += x.first;
        }
    }
    return st;
}
int main(){
    string st = "Aabb";
    cout<<frequencySort(st)<<endl;
    return 0;

}