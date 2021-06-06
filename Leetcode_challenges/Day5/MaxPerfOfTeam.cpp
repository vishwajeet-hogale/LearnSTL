#include<iostream>
#include<bits/stdc++.h>
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
int cmp(pair<int,int> &a ,pair<int,int> &b){
    return a.first >=  b.first;
}
int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        priority_queue<int> p;
        vector<pair<int,int>> zip;
        for(int i=0;i<n;i++){
            zip.push_back(make_pair(efficiency[i],speed[i]));
        }
        sort(zip.begin(),zip.end(),cmp); 
        int speed_sum = 0;
        int sum_max = 0;
        int perf = 0;
        for(int i=0;i<n;i++){ 
            if(p.size() > k -1 ){
                speed_sum -= p.top().second;
                p.pop();
            }
            p.push(x);
            speed_sum += x.second;
            perf = max(perf,speed_sum * x.first);
        }
        return perf % 1000000007;
}
int main(){
    vector<int> speed({2,8,2});
    vector<int> efficiency({2,7,1});
    vector<int> r;int k = 2;
    
    cout<<maxPerformance(3,speed,efficiency,2)<<endl;
    return 0;
}