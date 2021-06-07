#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//Aprroach 1
// class Solution {
// public:
//     int m =INT_MIN;
//     int maxArea(vector<int>& height) {
//         if(height.size()==2){
//             return min(height[0],height[1])*1;
//         }
//         for(int i=0;i<height.size();i++){
//             int diff = 1;
//             for(int j=i+1;j<height.size();j++){
                
//                     int prod = diff*min(height[i],height[j]);
//                     if(prod>m){
//                         m = prod;
                    
//                 }
//                 diff++;
//             }
//         }
//         return m;
//     }
// };
class Solution {
public:
    int m =INT_MIN;
    int maxArea(vector<int>& height) {
        int i =0;
        int j = height.size()-1;
        while(i<j){
            int area = (j-i)*min(height[i],height[j]);
            if(area > m)
                m = area;
            if (height[i] < height[j]){
                i++;
            }
            else
                j--;
        }
        return m;
    }
};
int main(){
    Solution s;
    vector<int> nums({1,2,3,4});
    cout<<s.maxArea(nums)<<endl;
    return 0;
}