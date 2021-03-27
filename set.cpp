/* When you insert elements in a set they're automatically sorted */ 
/*Maintains ascending order */
/* Vectors are not sorted. push_back inserts the element into a vector at the end only.
   Sets are always sorted. Insert always inserts the element such that an ascending order is maintined in the set. */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> S;
    S.insert(1);
    S.insert(2);
    S.insert(-10);
    S.insert(-1);
    for(int x:S){
        cout<<x<<endl;
    }
    auto it = S.find(-1);
    cout << *it<<endl;
    auto it1 = S.lower_bound(-10);
    auto it2 = S.upper_bound(-10);
    auto it4 = S.upper_bound(3);
    if(it4 == S.end()){
        cout<<"No Present"<<endl;
    }
    else{
        cout<<"Present"<<endl;
    }
    /* Use S.erase(2);  to remove an element */
    return 0;
}