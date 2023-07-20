//Problem Link: https://leetcode.com/problems/range-sum-of-bst/

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
    void pushNode(TreeNode* root, vector<int>& vec)
    {
        if(root == NULL) return;
        vec.push_back(root->val);
        pushNode(root->left, vec);
        pushNode(root->right, vec);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int> vec;
        pushNode(root, vec);
        sort(vec.begin(), vec.end());
        int sum = 0;
        for(int i = 0; i < vec.size(); i++)
        {
            if(vec[i] >= low && vec[i] <= high)
                sum += vec[i];
        }
        return sum;
    }
};