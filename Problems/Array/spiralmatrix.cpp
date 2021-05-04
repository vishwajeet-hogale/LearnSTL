#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> spriralOrder(vector<vector<int>> &matrix){
    char dir = 'R';
    int n = matrix.size();
    int m = matrix[0].size();
    int num = n*m;
    int cnt = 0;
    vector<int> res;
    int tr=0,br=n-1,lc=0,rc=m-1;
    int i=0,j=0;
    while(cnt<num){
        if(dir=='R'){
            res.push_back(matrix[i][j]);
            if(j==rc){
                dir='D';
                i++;
                tr++;
            }
            else{
                j++;
            }
            cnt++;
        }
        else if(dir == 'D'){
            res.push_back(matrix[i][j]);
            if(i==br){
                dir='L';
                j--;
                rc--;
            }
            else{
                i++;
            }
            cnt++;
        }
        else if(dir=='L'){
                res.push_back(matrix[i][j]);
                if(j==lc){
                    dir='U';
                    i--;
                    br--;
                }
                else{
                    j--;
                }
                cnt++;
            }
        else{
            res.push_back(matrix[i][j]);
            if(i==tr){
               dir='R';
                j++;
                lc++;
            }
            else{
                i--;
            } 
            cnt++;
        }
    }
    return res;
}
int main(){
    vector<vector<int>> nums;
    cout<<"Enter the size of the matrix in row x col format"<<endl;
    int row,col;
    cin>>row>>col;
    
    return 0;
}