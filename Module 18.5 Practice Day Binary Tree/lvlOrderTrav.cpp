/*

Problem Link: https://www.codingninjas.com/studio/problems/level-order-traversal_796002

*/

#include <bits/stdc++.h> 
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> getLevelOrder(BinaryTreeNode<int>* root)
{
    vector<int> v;
    if(root == NULL)
    {
        return v;
    }
    queue<BinaryTreeNode<int>*> qu;
    qu.push(root);
    while(!qu.empty())
    {
        BinaryTreeNode<int>* parent = qu.front();
        qu.pop();

        v.push_back(parent->val);
        if(parent->left) qu.push(parent->left);
        if(parent->right) qu.push(parent->right);
    }

    return v;
}