/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int height(TreeNode<int> *root, int& dime)
{
    if(root == NULL) return 0;
    int l = height(root->left, dime);
    int r = height(root->right, dime);
    dime = max(dime, l+r);
    return 1 + max(l, r);
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
   int dime = 0;
   height(root, dime);
   return dime;
}