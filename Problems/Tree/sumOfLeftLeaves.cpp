#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left, *right;
};
class Solution
{
public:
    int isLeaf(TreeNode *root)
    {
        if (!root)
            return false;
        if (!root->left && !root->right)
            return true;
        return false;
    }
    int helper(TreeNode *root)
    {
        int sum = 0;
        if (root != NULL)
        {

            if (isLeaf(root->left))
                sum += root->left->val;
            else
                sum += helper(root->left);

            sum += helper(root->right);
        }
        return sum;
    }
    int sumOfLeftLeaves(TreeNode *root)
    {

        return helper(root);
    }
};