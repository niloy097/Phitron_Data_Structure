/*

Problem Link: https://leetcode.com/problems/same-tree/

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
    vector<int> v1, v2;
    void pre1(TreeNode* p)
    {
        if(p == NULL)
        {
            v1.push_back(0);
            return;
        }
        v1.push_back(p->val);
        pre1(p->left);
        pre1(p->right);
    }
    void pre2(TreeNode* q)
    {
        if(q == NULL)
        {
            v2.push_back(0);
            return;
        }
        v2.push_back(q->val);
        pre2(q->left);
        pre2(q->right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        pre1(p);
        pre2(q);
        return v1 == v2;
    }
};


