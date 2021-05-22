#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    vector<int> majorityElement(vector<int>& nums) {
        int rep = nums.size()/3;
        map<int,int> m;
        vector<int> res;
        for(int &i:nums){
            if(m.find(i) == m.end()){
                m[i] =1 ;
            }
            else{
                m[i]++;
                
            }
            if(m[i] > rep && find(res.begin(),res.end(),i) == res.end()){
                    res.push_back(i);
            }
        }
        
        return res;
        
    }
};
int main(){
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(3);

    Solution s;
    vector<int> res = s.majorityElement(nums);
    return 0;
}