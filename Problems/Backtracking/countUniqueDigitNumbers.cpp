#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int count=0;
    
    void helper(int n, string &curr_str, vector<char> &array){

        if(curr_str[0]=='0')
            return;
		
        if(curr_str.length()<n){
            count++;
        }
	
        if(curr_str.length()==n){
            count++;
            return;
        }
        for(auto i=0;i<array.size();i++){
         
            char temp = array[i];
            curr_str.push_back(temp);
            array.erase(array.begin()+i);
            helper(n,curr_str,array);
            array.insert(array.begin()+i,temp);
            curr_str.pop_back();
            
        }
    }
    int countNumbersWithUniqueDigits(int n) {
        vector<char> array{'0','1','2','3','4','5','6','7','8','9'};
        string curr_str ="";
        helper(n,curr_str,array);
        return count;
    }
};