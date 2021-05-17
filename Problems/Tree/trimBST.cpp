#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node *right;
};
struct node* create_node(int val){
    struct node *p = new node;
    p->data = val;
    p->left = NULL;
    p->right = NULL;
    return p;
}
struct node* insert(vector<int>& arr,struct node *root,int i,int n){
    if(i<n){
        struct node *p = create_node(arr[i]);
        root = p;
        root->left = insert(arr,root->left,2*i+1,n);
        root->right = insert(arr,root->right,2*i+2,n);

    }
    return root;
}
node* trimBST(node* R, int L, int H) {
        if (!R) return R;
        if (R->data < L) return trimBST(R->right,L,H);
        else if (R->data > H) return trimBST(R->left,L,H);
        R->left = trimBST(R->left,L,H) ;
        R->right = trimBST(R->right,L,H);
        return R;
}
   

int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);

    
    arr.push_back(3);
    struct node *root = insert(arr,root,0,arr.size());
    node* res = trimBST(root,1,2);
    return 0;
}