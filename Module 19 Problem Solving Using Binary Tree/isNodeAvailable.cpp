/*

Problem Link: https://www.codingninjas.com/studio/problems/code-find-a-node_5682

*/

/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
//Iterative Solution
bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    queue<BinaryTreeNode<int>*> qu;
    qu.push(root);
    while(!qu.empty())
    {
        BinaryTreeNode<int>* parent = qu.front();
        qu.pop();

        if(parent->data == x) return true;

        if(parent->left) qu.push(parent->left);
        if(parent->right) qu.push(parent->right);
    }

    return false;
}

//Recursive Solution-->
/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    if(root == NULL) return false;
    if(root->data == x) return true;
    bool l = isNodePresent(root->left, x);
    bool r = isNodePresent(root->right, x);
    return l || r;

}