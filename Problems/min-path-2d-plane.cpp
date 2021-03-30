#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include<math.h>
int min_cost(vector<pair<int,int>> M,int n){
    int path = 0;
    int i =0;
    for(int i =0;i<n;i++){
        // cout<<"("<<M[i].first<<","<<M[i].second<<")"<<endl;
        path += max(abs(M[i].first - M[i+1].first),abs(M[i].second - M[i+1].second ));
        // cout<<path<<endl;
    }
    return path;

}
int main(){
    vector< pair<int,int> > M;
    int n;
    cout<<"Enter the number of points :"<<endl;
    cin>>n;
    int p1,p2;
    for(int i=0;i<n;i++){
        cout<<"Enter x coord : "<<endl;
        cin>>p1;
        cout<<"Enter y coord : "<<endl;
        cin>>p2;
        M.push_back(make_pair(p1,p2));        
    }
    cout<<endl;
    cout << min_cost(M,n) << endl;

    return 0;
}