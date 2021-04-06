#include<iostream>
#include<bits/stdc++.h>
#define V 5
using namespace std;
int valid_connection(int pos, int j,int graph[V][V],int visited[]){
    if(graph[visited[pos-1]][j] == 0){
        return 0;
    }
    for(int i=0;i<pos;i++){
        if(visited[i] == j){
            return 0;
        }
    }
    return 1;
}
int hamiltonian(int graph[V][V], int n,int visited[],int pos){
    if(pos == V){
        if(graph[visited[pos-1]][visited[0]]==1)
            return 1;
        else
            return 0;
    }
    for(int v = 1;v<V;v++){
        if(valid_connection(pos,v,graph,visited)){
            cout<<visited[pos]<<endl;
            visited[pos] = v;
            if(hamiltonian(graph,5,visited,pos+1)==1){
                return 1;
            }
            visited[pos]=-1;
        }
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter the number of vertices so that the adjacency matrix cannn be created: "<<endl;
    cin>>n;
    int temp=0;
    // int **graph;
    int graph[V][V] = {{0, 1, 0, 1, 0},{1, 0, 1, 1, 1},{0, 1, 0, 0, 1},{1, 1, 0, 0, 1},{0, 1, 1, 1, 0}};
    int *visited = new int[V];
    for(int i=0;i<V;i++){
        visited[i]=-1;
    }
    visited[0] = 0;
    // for(int i=0;i<n;i++){
    //     cout<<"Row : "<<i<<endl;
    //     for(int j=0;j<n;j++){
    //         cout<<"Enter the number at row : "<<i<<" Column : "<<j<<endl;
    //         cin>>temp;
    //         graph[i][j] = temp; 
    //     }
    // }
    cout<<endl;
    cout<<"Result : "<<hamiltonian(graph,n,visited,0)<<endl;
    if (hamiltonian(graph,5,visited,1)){
        for(int i=1;i<V;i++){
            cout<<visited[i]<<"->";
        }
        cout<<endl;
    }
    return 0;
}