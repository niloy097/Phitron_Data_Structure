/*

Problem Link: https://leetcode.com/problems/univalued-binary-tree/

*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool y = true;
    void pre(TreeNode* root, int x)
    {
        if(root == NULL) return;
        pre(root->left, x);
        pre(root->right, x);
        if(root->val != x)
        {
            y = false;
            return;
        }
    }
    bool isUnivalTree(TreeNode* root) {
        pre(root, root->val);
        return y;
    }
};