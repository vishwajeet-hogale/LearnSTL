#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int cmp(pair<int,float>a,pair<int,float>b){
    return a.first>=b.first;
}
float knapsack(int capacity,vector<float> profit,vector<float> weight,int n){
    float max = 0;
    vector<pair<int,float>> proweight;
 
    for(int j=0;j<n;j++){

     
        proweight.push_back(make_pair(j,float(profit[j]/weight[j])));

    }
    sort(proweight.begin(),proweight.end(),cmp);
    int i=0;
    for(auto &x:proweight){

        if(capacity > 0 and weight[x.first]<=capacity){
            // cout<<weight[x.first];
            capacity = capacity - weight[x.first];
            max = max + profit[x.first];
            cout<<"Item number : "<<x.first<<"\tQuantity :"<<weight[x.first]<<endl;
        }
        else{
            break;
        }
        if(capacity>0){
            auto nx = next(&x,1);
            // cout<<capacity / weight[nx->first]<<endl;
            max = max + float(profit[nx->first] * (capacity / weight[nx->first])); 
            cout<<"Item number : "<<nx->first<<"\tQuantity :"<<capacity<<endl;
            capacity = 0;
        }
        // cout<<max<<endl;
    }
    return max;
}
int main(){
    cout<<"Enter the number of elements:"<<endl;
    int n;
    cin>>n;
    vector<float> profit;
    vector<float> weight;
    int capacity;
    cout<<"Enter the capacity of the bag in terms of weight:"<<endl;
    cin>> capacity;
    int temp,temp1;
    for(int i=0;i<n;i++){
        cout<<"Enter the profit and weight for article number : "<<i<<endl;
        cin>>temp>>temp1;
        profit.push_back(temp);
        weight.push_back(temp1);
    }
    float res = knapsack(capacity,profit,weight,n);
    cout<<"The maximum profit will be: " << res<<endl;
    return 0;
}