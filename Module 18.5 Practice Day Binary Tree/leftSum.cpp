/*

https://www.codingninjas.com/studio/problems/left-sum_920380

*/

#include <bits/stdc++.h> 
/*
	Tree Node class.

	class BinaryTreeNode 
	{
		T data;
		BinaryTreeNode<T> *left;
		BinaryTreeNode<T> *right;

		BinaryTreeNode(T data) {
			this->data = data;
			left = NULL;
			right = NULL;
		}
	}
*/


long long leftSum(BinaryTreeNode<int> *root)
{
	if(root == NULL)
        return 0;
    
    int sum = 0;
    if(root->left != NULL)
	{
        sum += root->left->data+leftSum(root->left);
        // sum += leftSum(root->left);
    }
    sum += leftSum(root->right);
    return sum;
}