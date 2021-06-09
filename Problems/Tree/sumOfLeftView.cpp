#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int data;
    TreeNode* left,*right;
};
TreeNode *create_node(int val){
    TreeNode *ptr = new TreeNode;
    ptr->right = NULL;
    ptr->left = NULL;
    ptr->data = val;
    return ptr;
}
TreeNode* make_binTree(vector<int>&nums,TreeNode *root,int i,int n){
    if (i < n)
    {
        TreeNode* temp = create_node(nums[i]);
        root = temp;
  
        // insert left child
        root->left = make_binTree(nums,
                   root->left, 2 * i + 1, n);
  
        // insert right child
        root->right = make_binTree(nums,
                  root->right, 2 * i + 2, n);
    }
    return root;
}

int sumOfLeftLeaves(TreeNode *root){
    vector<int> res;
    queue<TreeNode*> q;
    if(root==NULL)
        return 0;
    q.push(root);
    int sum = 0;
    while(!q.empty()){
        int size = q.size();
        for(int i=0;i<size;i++){
            TreeNode *curr = q.front();
            q.pop();
            if(curr == NULL)
                continue;
            if(i == 0){
                cout<<curr->data<<endl;
                sum += curr->data;
            }
            if(root->left)
                q.push(curr->left);
            if(root->right)
                q.push(curr->right);
        }
    }
    return sum;
}
int main(){
    vector<int> nums({1,2,3,4});
    TreeNode *root = make_binTree(nums,NULL,0,nums.size());
    int res = sumOfLeftLeaves(root);
    cout<<res<<endl;
    return 0;
}