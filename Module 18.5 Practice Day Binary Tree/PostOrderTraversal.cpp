/*


Problem link: https://www.codingninjas.com/studio/problems/name_2035933



*/


#include <bits/stdc++.h> 
/*
Following is the structure of Tree Node

class TreeNode 
{
   public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) 
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
*/
vector<int> v;
void postOrder(TreeNode* root)
{
    if(root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    v.push_back(root->val);
}
vector<int> postorderTraversal(TreeNode* root)
{
    v.clear();
    postOrder(root);
    return v;
}
