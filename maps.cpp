#include<iostream>
#include<bits/stdc++.h>
/* Map has key:value pairs 
   find/erase functions exist in maps as well that help in finding an element and deleting a pair log(N) */

   /* It maintains a BST of keys inernally*/ 
   /* Takes o(Nlog(N)) while inserting new elements */  
   /* Set is a subset of maps */
using namespace std;
int main(){
    map<int,int> A;
    A[1] = 100;
    A[2] = 300;
    A[3] = 120;
    map<char,int> cnt;
    string x = "Vishwa";
    for(char c:x){
        cnt[c]++;
    }
    return 0;

}