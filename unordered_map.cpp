#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/* Uses hashing to store the data */ 
/* Takes O(N) time to insert */
 int main(){
    map<char,int> M;
    unordered_map<char,int> U;
    string s = "Vishwajeet Shivaji Hogale";
    for(char c:s){ // (Nlog(N)) N= len(s)
        M[c]++;
    }
    for(char c:s){ // O(N) N = len(s)
        U[c]++;
    }
    return 0;
 }