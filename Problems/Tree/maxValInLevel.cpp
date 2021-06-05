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
    int m = INT_MIN;
    vector<int> res;
    vector<int> largestValues(TreeNode* root) {
        queue<TreeNode*> q;
        if(!root)
            return res;
        q.push(root);
        int level = 0;
        while(!q.empty()){
            int size = q.size();
      
            for(int j=0;j<size;j++){
                TreeNode* curr = q.front();
                if(curr->val > m)
                    m = curr->val;
                q.pop();
                if(curr->left)
                q.push(curr->left);

                // pushing right child of
                // current node.
                if(curr->right)
                q.push(curr->right);
                
            }
            res.push_back(m);
            m = INT_MIN;
            
            level++;
           
        }
        return res;
    }
};