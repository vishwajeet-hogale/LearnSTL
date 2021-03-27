/* 
Program 1 : Split an array into into two halves such that the sum of each of the two halves is the same.
Ex 1 : [1,3,2] --> [1,2] , [3]
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int total_sum = 0;
    vector<int> A(n+5,0);
    for(int i=0;i<n;i++){
        cin>>A[i];
        total_sum += A[i];
    }
    if(total_sum & 1){
        return 0;
    }
    map<long long,int> M1,M2;
    M1[A[0]] = 1;
    for(int j=1;j<n;j++){
        M2[A[j]]++;
    }
    int k=0;
    int temp_sum = 0;
    while(k!=n){
        temp_sum += A[k];
        if(temp_sum == total_sum/2){
            cout<<"Yes"<<endl;
            return 0;
        }
        if(temp_sum<total_sum/2){
            int x = total_sum/2 - temp_sum;
            if(M2[x]>0){
                cout<<"Yes"<<endl;
                return 0;
                
            }

        }
        else{
            int x = temp_sum - total_sum/2;
            if(M1[x]>0){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
        M1[A[k+1]]++; 
        M2[A[k+1]]--;
    }
    cout<<"No"<<endl;
    return 0;
}