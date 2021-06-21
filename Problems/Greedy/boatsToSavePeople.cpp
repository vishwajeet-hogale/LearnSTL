#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
         sort(people.begin(), people.end());
        int n = people.size(), i = 0, j = n-1, count = 0;
        
        while(i<=j) {
            if(people[i] + people[j] > limit) j--; 
            else i++, j--;
            count++;
        }
        
        return count;
        }
    
};