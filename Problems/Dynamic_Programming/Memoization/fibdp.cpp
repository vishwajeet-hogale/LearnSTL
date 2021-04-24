#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define M 20

int fib(int n, long long m[M]){
    if(n<=0){
        return 0;
    }
    else if(n==1){
        return 1;

    }
    else if(!m[n]){
        m[n] = fib(n-1,m)+fib(n-2,m);
    }
    cout<<m[n]<<endl;
    return m[n];
}
int main(){
    long long *a = new long long[M];
    for(int i=0;i<M+1;i++){
        a[i] = 0;
    }
    cout<<"Answer : "<<fib(M,a)<<endl;
    return 0;
}