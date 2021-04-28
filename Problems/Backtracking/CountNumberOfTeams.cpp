#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool checkMinOrder(vector<int> arr){
        for(int i=0;i<2;i++){
            if(arr[i]>=arr[i+1])
                return false;
            
        }
        return true;
    }
    bool checkMaxOrder(vector<int> arr){
        for(int i=0;i<2;i++){
            if(arr[i]<=arr[i+1])
                return false;
            
        }
        return true;
    }
    void findNumbers(vector<int>& ar, vector<int>& r,
                 int i,int &sum)
    {
        // if we get exact answer
        if(r.size() == 3){
        if ((checkMinOrder(r) || checkMaxOrder(r)) ) {
         
            sum = sum + 1;
            cout<<"(";
            for(int i=0;i<3;i++){
                cout<<r[i]<<",";
            }
            cout<<")"<<endl;
        }
        }

        // Recur for all remaining elements that
        // have value smaller than sum.
        while (i < ar.size() && r.size() <= 3) {

            // Till every element in the array starting
            // from i which can contribute to the sum
            r.push_back(ar[i]); // add them to list

            // recur for next numbers
            findNumbers(ar,r, i,sum);
            i++;

            // Remove number from list (backtracking)
            r.pop_back();
        }
      
        
    }
    int numTeams(vector<int>& rating) {
        vector<int> r;
        int sum = 0;
        findNumbers(rating,r,0,sum);
        return sum;
    }
int main(){
    vector<int> res;
 
 
    res.push_back(2);
    res.push_back(5);
    res.push_back(3);
    res.push_back(4);
    res.push_back(9);
    res.push_back(6);
    res.push_back(7);


    int sum = numTeams(res);
    
    cout<<sum<<endl;
    return 0;
}