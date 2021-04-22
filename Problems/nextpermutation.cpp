/*
Question : Find the next permutataion 
Approach used is case analysis.
one classic algorithm to generate next permutation is:
Step 1: Find the largest index k, such that A[k]<A[k+1]. If not exist, this is the last permutation. (in this    problem just sort the vector and return.)
Step 2: Find the largest index l, such that A[l]>A[k].
Step 3: Swap A[k] and A[l].
Step 4: Reverse A[k+1] to the end.

Time complexity = O(n) and space complexity = o(1)
*/
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

vector<int> next_permutation(vector<int> num){
    

    int sz = num.size();
        int k=-1;
        int l;
        //step1
        for (int i=0;i<sz-1;i++){
            if (num[i]<num[i+1]){
                k=i;
            }
        }
        if (k==-1){
            sort(num.begin(),num.end());
            return num;
        }
        
        //step2
        for (int i=k+1;i<sz;i++){
            if (num[i]>num[k]){
                l=i;
            }
        }
        //step3        
        int tmp = num[l];
        num[l]=num[k];
        num[k]=tmp;
        //step4
        reverse(num.begin()+k+1,num.end());
        return num;
    }

int main(){
    vector<int> m;
    m.push_back(6);
    m.push_back(2);
    
    m.push_back(1);
    
    m.push_back(5);
    
    m.push_back(4);
    
    m.push_back(3);
    
    m.push_back(0);
    vector<int> res = next_permutation(m);
    for(int &i:res){
        cout<< i<<",";
    }
    cout<<"\n";
    return 0;
}