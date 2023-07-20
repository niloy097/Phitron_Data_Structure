//Problem Link: https://leetcode.com/problems/two-sum-iv-input-is-a-bst/
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
    void pushVal(TreeNode* root, vector<int>& v)
    {
        if(root == NULL) return;
        v.push_back(root->val);
        pushVal(root->left, v);
        pushVal(root->right, v);
    }
    bool check(vector<int>& v, int k)
    {
        for(int i = 0; i < v.size() - 1; i++)
        {
            for(int j = i + 1; j < v.size(); j++)
            {
                if(v[i] + v[j] == k) return true;
            }
        }
        return false;
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> v;
        pushVal(root, v);
        return check(v, k);
    }
};