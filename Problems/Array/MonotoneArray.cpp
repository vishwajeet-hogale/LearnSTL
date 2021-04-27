#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isMonotonic(vector<int>& A) {
        bool flag = true;
        A.erase(unique(A.begin(),A.end()),A.end());
        if(A.size()==1){
            return true;
        }
        if(A[0]>=A[1]){
            for(int i=1;i<A.size()-1;i++){
                if(A[i]<A[i+1]){
                    flag = false;
                   
                }
            }
        }
        else if(A[0]<=A[1]){
            for(int i=1;i<A.size()-1;i++){
                if(A[i]>A[i+1]){
                    flag = false;
                   
                }
            }
        }
        return flag;
    }
    int main(){
    vector<int> num;
    num.push_back(1);
    num.push_back(1);
    num.push_back(2);
    num.push_back(2);
    num.push_back(1);
    num.push_back(1);
    num.push_back(2);
    cout<<"Is the given array monotonic? "<<endl;
    cout<<isMonotonic(num)<<endl;
    return 0;
}