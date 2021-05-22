#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
};
class Solution {
public:
    void inorder(vector<int> &ans,TreeNode *root){
        if(!root)
            return;
        inorder(ans,root->left);
        ans.push_back(root->val);
        inorder(ans,root->right);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> ans1,ans2;
        inorder(ans1,root1);
        inorder(ans2,root2);
        vector<int> res;
        int i=0,j=0;
        int n1 = ans1.size();
        int n2 = ans2.size();
        while(i<n1 && j<n2){
            if(ans1[i]<=ans2[j]){
                res.push_back(ans1[i]);
                i++;
            }
            else{
                res.push_back(ans2[j]);
                j++;
            }
        }
        if(j != n2){
            while(j != n2){
                res.push_back(ans2[j]);
                j++;
            }
        }
        
        if(i != n1){
            while(i != n1){
                res.push_back(ans1[i]);
                i++;
            }
        }
        return res;
    }
};