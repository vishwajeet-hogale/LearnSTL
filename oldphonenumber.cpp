/*
Input :
 phoneNumber = "36622778157815781519518916891"   
 strings = ["foo","bar","baz","foobar"]
Output : 
 Number of strings that are a substring of that phoneNumber
*/
#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
void init(map<string,int> &grid){
    grid["1"] = 1;
    grid["abc"] = 2;
    grid["def"] = 3;
    grid["ghi"] = 4;
    grid["jkl"] = 5;
    grid["mno"] = 6;
    grid["pqrs"] = 7;
    grid["tuv"] = 8;
    grid["wxyz"] = 9;
    grid["0"] = 0; 
}
vector<vector<int>> checkSubstr(map<string,int> &grid,char s1){
    string s(1,s1);
    vector<vector<int>> res;
     vector<int> temp;
    for(auto const &x:grid){
       
        if(x.first.find(s) != string::npos){
            temp.push_back(1);
            temp.push_back(x.second);
            res.push_back(temp);
            temp.clear();
            return res;
        }
    }
    temp.push_back(0);
    temp.push_back(-1);
    res.push_back(temp);
    temp.clear();
    return res;
}
int checkFinal(string ph,string s2){
    
        if(ph.find(s2) != string::npos){
            
            return 1;
        }
   
    return 0;
}
int find(vector<string> &strings,string phNo,map<string,int> &grid){
    vector<string> res;
    int c1 =0 ;
    for(string &i:strings){
        string temp = "";
        for(char c:i){
            vector<vector<int>> r = checkSubstr(grid,c);
            if(r[0][0]){
                
                temp += to_string(r[0][1]);
            }
        }
        res.push_back(temp);
        if(checkFinal(phNo,temp)){
            cout<<temp<<endl;
            c1++;
        }
    }
   return c1;
}
int main(){
    map<string,int> grid;
    init(grid);
    string phNo = "36622778157815781519518916891";
    vector<string> strings;
    strings.push_back("foo");
    strings.push_back("bar");
    strings.push_back("baz");
    strings.push_back("foobar");
    cout<<phNo<<endl;
    int ans = find(strings,phNo,grid);
    cout<<ans<<endl;
    return 0;
}