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
bool check(struct node* root1,struct node* root2){
    if(root1 == NULL && root2 == NULL){
        return true;
    }
    if(root1 && root2 && root1->data == root2->data){
        return check(root1->left,root2->right) && check(root1->right,root2->left);
    }
    return false;
}
bool checkSymmetric(struct node* root){
    return check(root,root);
}  
   

int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(4);
    
    arr.push_back(3);
    struct node *root = insert(arr,root,0,arr.size());
    cout<<checkSymmetric(root)<<endl;
    return 0;
}