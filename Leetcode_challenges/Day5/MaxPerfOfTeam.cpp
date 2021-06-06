#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

/* Approach one is an intuitive brute force approach and it is not right */
// int sum_max = 0;
// int get_min(vector<int>&r,vector<int>& efficiency){
//     int min = INT_MAX;
//     for(int j:r){
//         if(efficiency[j]<min)
//         min = efficiency[j];
//     }
//     return min;
// }
// void maximize(vector<int>& speed, vector<int>& efficiency,int i,vector<int>&r,int k){
//     int sum =0;
//     if(r.size() == k){
//         cout<<"(";
//         for(int j:r){
//             sum += speed[j];
//             cout<<speed[j]<<" ";
//         }
//         cout<<")"<<endl;
//         int min = get_min(r,efficiency);
//         if(sum_max < min * sum){
//             sum_max = (min*sum) % 1000000007;
//         }
//         return;
//     }
//     while(i<speed.size()){
//         r.push_back(i);
//         maximize(speed,efficiency,i+1,r,k);
//         i++;
//         r.pop_back();
//     }
// }

/* Greedy approach by choosing the minimum efficiency and then maximizing the speed of the other 
efficiencies greater than the fixed efficiency. Thereby maximizing the performance*/

class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        vector<pair<int,int>> perf(n);
        for(int i=0;i<n;i++)
        {
            perf[i]={efficiency[i],speed[i]};
        }
        
        //sort the perf in descending order
        sort(rbegin(perf),rend(perf));
        
        //priority queue to get the smallest sum 
        priority_queue<int,vector<int>,greater<int>> pq; //min heap
        long sum=0;
        long  res=0;
        for(auto [eff,int s] : perf)
        {
            sum+=speed;
			//push the current speed to the pq
            pq.push(speed);
            if(pq.size()>k)
            {
                //remove the smallest speed
                sum-=pq.top();
                pq.pop();
            }
			//since eff is the currents small efficiency 
            res=max(res,sum*eff);
        }
        return res % (int)(1e9+7);
    }
};
int main(){
    vector<int> speed({2,8,2});
    vector<int> efficiency({2,7,1});
    vector<int> r;int k = 2;
    Solution s;
    cout<<s.maxPerformance(3,speed,efficiency,2)<<endl;
    return 0;
}