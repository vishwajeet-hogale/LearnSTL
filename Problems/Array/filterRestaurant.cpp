#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance)     {
        set<pair<int, int>, greater<pair<int, int>>> tmp;
        for(auto& restaurant : restaurants){
            if(veganFriendly && !restaurant[2]) continue;
            if(restaurant[3] > maxPrice) continue;
            if(restaurant[4] > maxDistance) continue;
            tmp.emplace(restaurant[1], restaurant[0]);
        }
        vector<int> res;
        res.reserve(tmp.size());
        for(auto x : tmp) res.push_back(x.second);
        return res;
    }
};