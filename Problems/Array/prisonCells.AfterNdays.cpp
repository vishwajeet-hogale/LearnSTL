#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int n) {
        int cycle = 1;
       vector<int> new1(8,0);
        for(int i=1;i<7;i++){
            new1[i] = (cells[i-1]==cells[i+1])?1:0;
        }
        cells = new1;
        n--;
        while(n-- > 0){
            vector<int> temp(8);
             for(int i=1; i<7; i++)
            {
                temp[i] = (cells[i-1] == cells[i+1] ? 1 :0);
            }
            if(temp == new1){
                n %= cycle;
            }
            cells = temp;
            cycle++;
        }
        return cells;
    }
};