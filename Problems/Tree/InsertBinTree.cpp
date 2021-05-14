#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode *right;
};
TreeNode* create_node(int val){
     TreeNode *ptr = new TreeNode;
     ptr->left = NULL;
     ptr->right = NULL;
     ptr->data = val;
     return ptr;
}
 TreeNode* InsertOneByOne(TreeNode* root,int val){
    if(root==NULL){
        TreeNode* ptr = create_node(val);
        // cout<<ptr->data<<endl;
        return ptr;
    }
    if(val>root->data)
        root->right = InsertOneByOne(root->right,val);
    else
        root->left = InsertOneByOne(root->left,val);
    return root;
}
TreeNode* InsertAll(vector<int> &values){
    TreeNode* root = InsertOneByOne(NULL,values[0]);
    for(int i=1;i<values.size();i++){
        root = InsertOneByOne(root,values[i]);
        // cout<<root<<endl;
    }
    return root;
}
void Inorder(TreeNode* root){
    if(root == NULL){
        return;
    }
    Inorder(root->left);
    cout<<root->data<<"->";
    Inorder(root->right);
}
int main(){
    vector<int> values;
    values.push_back(3);
    values.push_back(4);
    values.push_back(2);
    values.push_back(1);
    values.push_back(5);
    values.push_back(0);
    TreeNode* root = InsertAll(values);
    Inorder(root);
    // cout<<root->data<<endl;
    
    
    return 0;
}