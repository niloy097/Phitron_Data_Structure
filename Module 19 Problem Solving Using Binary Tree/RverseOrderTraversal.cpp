/*

Problem Link: https://www.codingninjas.com/studio/problems/reverse-level-order-traversal_764339

*/

/************************************************************

    Following is the TreeNode class structure:

    template <typename T>

    class TreeNode {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include<bits/stdc++.h>
vector<int> reverseLevelOrder(TreeNode<int> *root){
    vector<int> v;
    queue<TreeNode<int>*> qu;
    if(root) qu.push(root);
    while(!qu.empty())
    {
        TreeNode<int>* node = qu.front();
        qu.pop();

        v.push_back(node->val);

        if(node->left) qu.push(node->left);
        if(node->right) qu.push(node->right);
    }
    reverse(v.begin(), v.end());
    return v;
}