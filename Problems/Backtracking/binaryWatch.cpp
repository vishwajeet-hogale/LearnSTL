#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    vector<string> res;int hours_end = 3,min_end = 9;int N = 10;

void all_solutions(vector<int> &r,int i,int turned_on,vector<int> &all_times){
    if(r.size() == turned_on){
        string a = "";
        int h = 0;
        int min = 0;
        for(int j:r){
            if(j<= 3){
                h += all_times[j];
            }
            else
            min += all_times[j];
        }
        if(h>11 || min > 59)
            return;
        else{
        string hour = "",m = ""; 
        // if(h<10){
        //      hour = '0' + to_string(h);
        // }
        // else
            hour += to_string(h);
        if(min<10){
            m = '0' + to_string(min);
        }
        else 
            m += to_string(min);
        a += hour + ":" + m;
        res.push_back(a);
        // cout<<a<<endl;
        }
        return;

    }
    while(i<N){
       
        r.push_back(i);
        all_solutions(r,i+1,turned_on,all_times);
        i++;
        r.pop_back();
    }
    
}
vector<string> readBinaryWatch(int turnedOn) {
    vector<int> r;
    if(turnedOn == 9){
        return res;
    }
    vector<int> all_times({8,4,2,1,32,16,8,4,2,1});
    all_solutions(r,0,turnedOn,all_times);
    return res;
}
int main(){
    vector<string> b = readBinaryWatch(4);
    return 0;
}