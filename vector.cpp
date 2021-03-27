#include<iostream>
// #include<conio.h>
#include<bits/stdc++.h>
using namespace std;
#include<algorithm>
/* Learnt the use of vectors, sorting (Uses merge sort) and binary_search as functionailities on vecotrs */
int main(){
    vector<int> A = {11,2}; // dynamic sized array with many functionalities.
    sort(A.begin(),A.end()); //O(Nlog(N))
    bool present = binary_search(A.begin(),A.end(),2);
    cout<<"Result = " << present<<endl;
    /*Inserting elements into a vector at the end */
    A.push_back(25);
    A.push_back(35);
    A.push_back(25);
    sort(A.begin(),A.end()); // by adding the third parameter you can sort it using a function based on your condition
    auto it = lower_bound(A.begin(),A.end(),25); // >=
    auto it1 = upper_bound(A.begin(),A.end(),25); // >
cout<<"Printing the iterators"<<endl;
    cout<<*it<<"+"<<*it1<<endl;
    cout << it1 - it <<endl;
    /*Version 1 */
    cout<<"Version 1 of traversing through a vector"<<endl;
    for(auto it3 = A.begin();it3!=A.end();it3++){
        cout<<*it3<<endl;
    }
    /*Version 2 */
    cout<<"Version 2 of traversing through a vector"<<endl;
    for(int x:A){
        cout<<x<<endl;
    }
    /* If you want to access  the element itself use & */ 
    for (int &x : A){ //using the & you can use the element itself and the value at that location will be changed if at all any changes are made
        x++;
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}