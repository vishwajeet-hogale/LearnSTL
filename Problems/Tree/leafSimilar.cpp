#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    TreeNode *left,*right;
};
class Solution {
public:
    void getLeaves(TreeNode *root,vector<int> &num){
        if(!root) return;
        getLeaves(root->left,num);
        if(root->left == NULL && root->right == NULL)
            num.push_back(root->val);
        getLeaves(root->right,num);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> num1,num2;
        getLeaves(root1,num1);
        getLeaves(root2,num2);
        if(num1 == num2)
            return true;
        return false;
        
    }
};