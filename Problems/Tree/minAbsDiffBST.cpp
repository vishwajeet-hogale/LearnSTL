#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    int min = 1e5 + 3, prev = -(1e5);

    void helper(TreeNode *root)
    {
        if (!root)
            return;

        helper(root->left);
        if ((root->val - prev) < min)
            min = (root->val - prev);
        prev = root->val;
        helper(root->right);
    }
    int getMinimumDifference(TreeNode *root)
    {
        helper(root);
        return min;
    }
};