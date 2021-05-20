#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int> v1;
        for(auto x:nums)
            mp[x]++;
        priority_queue<pair<int,int>> maxheap;
        for(auto x:mp)
        {
            maxheap.push({x.second,x.first});
        }
        while(k--)
        {
            v1.push_back(maxheap.top().second);
            maxheap.pop();
        }
        return v1;
        
        
    }
};