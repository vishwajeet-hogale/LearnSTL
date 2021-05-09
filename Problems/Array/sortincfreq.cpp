#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// sort based on increasing frequency or descreasing item of items have same frequency
bool comparator(pair<int,int>&a, pair<int,int>&b)
{
    return a.first<b.first || (a.first==b.first && a.second>b.second);
}


    vector<int> frequencySort(vector<int>& nums) {
        
        // return nums with only one element
        if(nums.size()==1) return nums;
        
        // track frequency count of items <frequency,count>
        vector<pair<int,int>>freq(203,{0,0});
                
        // populate frequency count
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]+100].first++;
            freq[nums[i]+100].second = nums[i];
        }
        
        // sort frequency count based on custom comparator
        sort(freq.begin(),freq.end(),comparator);
        
        vector<int>result;
        
        // populate result from sorted frquency count
        for(int i=0;i<freq.size();i++)
        {
            if(freq[i].first==0)continue;
            
            int count = freq[i].first;
            int data = freq[i].second;
            
            while(count--)result.push_back(data);
        }
        
        return result;
    }

int main(){
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(3);
    nums.push_back(3);
    nums.push_back(1);
    vector<int> res  = frequencySort(nums);
    cout<<endl;
    for(int i:res){
        cout<<i<<endl;
    }
    return 0;

}