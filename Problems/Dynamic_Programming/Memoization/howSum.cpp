/* Write a function 'howSum(target,numbers)' that takes in a target and ana arary of numbers as arguements.


The function should return an array containing any combination of elements taht add up to exactly the target
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

    void findNumbers(vector<int>& ar, int sum,
                 vector<vector<int> >& res, vector<int>& r,
                 int i)
{
    //  if we get exact answer
    if (sum == 0) {
        res.push_back(r);
        return;
    }
 
    // Recur for all remaining elements that
    // have value smaller than sum.
    while (i < ar.size() && sum - ar[i] >= 0) {
 
        // Till every element in the array starting
        // from i which can contribute to the sum
        r.push_back(ar[i]); // add them to list
 
        // recur for next numbers
        findNumbers(ar, sum - ar[i], res, r, i);
        i++;
 
        // Remove number from list (backtracking)
        r.pop_back();
    }
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ar = candidates;
        sort(ar.begin(), ar.end());
 
    // remove duplicates
    ar.erase(unique(ar.begin(), ar.end()), ar.end());
 
    vector<int> r;
    vector<vector<int> > res;
    findNumbers(ar, target, res, r, 0);
 
    return res;
    }
int main(){
    vector<int> res;
 
 
    res.push_back(2);
    res.push_back(15);
    res.push_back(20);
    res.push_back(5);
    res.push_back(7);
    res.push_back(9);
    res.push_back(50);

    vector<vector<int>> ar = combinationSum(res,100);
    if(ar.size() == 0){
        cout<<"No answer"<<endl;
        return 0;
    }
    for (int i = 0; i < ar.size(); i++) {
        if (ar[i].size() > 0) {
            cout << " ( ";
            for (int j = 0; j < ar[i].size(); j++)
                cout << ar[i][j] << " ";
            cout << ")"<<endl;
        }
    }
    cout<<"Possible ways to get the output = "<<ar.size()<<endl;
    return 0;
}