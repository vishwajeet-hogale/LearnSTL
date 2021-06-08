#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

class Solution {
public:
    int index = 0;
    map<int,int> m;
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder,int start,int end){
        if(start>end){
            return NULL;
        }
        TreeNode *root = new TreeNode(preorder[index++]);
        if(start == end){
            return root;
        }
        int cur = m[root->val];
        root->left = helper(preorder,inorder,start,cur-1);
        root->right = helper(preorder,inorder,cur+1,end);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0;i<inorder.size();i++){
            m[inorder[i]] = i;
        }
        return helper(preorder,inorder,0,inorder.size()-1);
        
    }
};