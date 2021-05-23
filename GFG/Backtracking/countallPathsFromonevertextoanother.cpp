#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;
void dfs(vector<vector<int>> &graph, int s, int d, int &cnt, vector<int> &r)
{

    if(s == d){
        cnt++;
        return ;
    }
 
    if(r[s] == true)
        return;
 

    r[s] = true;
    
 

    for( int i =0; i<4; i++)
    {
        if(!r[i] && graph[s][i] == 1)
            dfs(graph, i, d, cnt, r);
    }
 

    r[s] = false;
 
    return;
}
 

int main(){

    vector<int> r(4,0);
    vector<vector<int>> graph(4,vector<int>(4,0));
    graph[0][1] = 1;
    graph[0][2] = 1;
    graph[1][0] = 1;
    graph[1][3] = 1;
    graph[1][2] = 1;
    graph[2][0] = 1;
    graph[2][3] = 1;
    graph[2][1] = 1;
    graph[3][1] = 1;
    graph[3][2] = 1;
    for(int i =0;i<graph.size();i++){
       
        for(int &j:graph[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    int c = 0;
    dfs(graph,0,3,c,r);
    cout<<c<<endl;
    return 0;
}