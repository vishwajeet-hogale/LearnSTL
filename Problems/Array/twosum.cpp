#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> r;
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            int com = target-nums[i];
            
            if(m.find(com) != m.end()){
                
                r.push_back(i);
                r.push_back(m.find(com)->second);
                return r;
            }
            m[nums[i]] = i;
        }
        return r;
    }
int main(){
    vector<int> num;
    num.push_back(1);
    num.push_back(10);
    num.push_back(9);
    num.push_back(4);
    num.push_back(2);
    num.push_back(3);
    vector<int> r = twoSum(num,14);
    cout<<"(";
    for(int &i:r){
        cout<<i<<",";
    }
    cout<<")"<<endl;
    return 0;
}