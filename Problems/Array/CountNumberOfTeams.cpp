#include<iostream>
#include<bits/stdc++.h>
using namespace std;

    int numTeams(vector<int>& rating) {
        int sum =0;
        int n = rating.size();
        for(int i=0;i<n;i++){
            vector<int> left(2,0);
            vector<int> right(2,0);
            for(int j = 0;j<n;j++){
                if(rating[i]>rating[j]){
                    ++left[i>j ?0:1];
                
                }
                if(rating[j]>rating[i]){
                    ++right[j>i?1:0];
                }

            }
            sum = sum + left[0]*right[1]+left[1]*right[0];
        }
        return sum;
    }
int main(){
    vector<int> res;
 
 
    res.push_back(2);
    res.push_back(5);
    res.push_back(3);
    res.push_back(4);
    res.push_back(1);
    // res.push_back(6);
    // res.push_back(7);


    int sum = numTeams(res);
    
    cout<<sum<<endl;
    return 0;
}