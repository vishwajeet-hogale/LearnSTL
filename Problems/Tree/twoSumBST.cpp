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
    unordered_set<int> m;
    bool f = false;
    void inorder(TreeNode* root,int target){
    if(!root)
        return;
    inorder(root->left,target);
    if(m.find(target - root->val) != m.end()){
        f = true;
    }
    m.insert(root->val);
    inorder(root->right,target);
    }
    bool findTarget(TreeNode* root, int k) {
        inorder(root,k);
        return f;
    }
};