#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

class Solution {
public:
    int num(int n,vector<int> arr,int i) {
        if (n == 0) return 1;
        if(i == 0) return INT_MAX;
        else if(n-arr[i-1] >= 0){
            return min(1+num(n-arr[i-1],arr,i),num(n,arr,i-1));
        }
        else if(arr[i-1]>n){
            return num(n,arr,i-1);
        }
        
        
    }
    int numSquares(int n){
        vector<int> all;
        for(int i=1;i<=n;i++){
            long long x = sqrt(i);
            if(x*x == i){
                cout<<i<<endl;
                all.push_back(i);
            }
        }
        cout<<endl;
        return num(n,all,all.size());
    }
};
int main(){
    int n = 233; // 169 + 64 output = 2
    Solution s;
    cout<<s.numSquares(n)-1<<endl;
    return 0;
}