#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left, *right;
};
unordered_map<int, int> m;
int preInd = 0;
TreeNode *create_node(int val)
{
    TreeNode *ptr = new TreeNode;
    ptr->val = val;
    ptr->left = NULL;
    ptr->right = NULL;
    return ptr;
}
TreeNode *helper(vector<int> &inorder, vector<int> &preorder, int start, int end, int &preInd)
{
    if (start > end)
        return NULL;
    TreeNode *root = create_node(preorder[preInd++]);
    if (start == end)
        return root;
    int ind = m[root->val];
    root->left = helper(inorder, preorder, start, ind - 1, preInd);
    root->right = helper(inorder, preorder, ind + 1, end, preInd);
    return root;
}
TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
{
    m.clear();
    int N = inorder.size();
    for (int i = 0; i < inorder.size(); i++)
    {
        m[inorder[i]] = i;
    }

    TreeNode *root = helper(inorder, preorder, 0, N - 1, preInd);
    return root;
}