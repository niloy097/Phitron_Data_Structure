/*

Problem Link: https://leetcode.com/problems/binary-tree-tilt/

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
    int sum = 0;
    int getSum(TreeNode* root)
    {
       
       if(root == NULL) return 0;
       int l = getSum(root->left);
       int r = getSum(root->right);
       int x = root->val + l + r;
       sum = sum + abs(l - r);
       return x;
        
    }
    int findTilt(TreeNode* root) {
        
        getSum(root);
        return sum;

    }
};