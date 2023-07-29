#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* left;
        Node* right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }

};
int maxHeightOfTree(Node* root)
{
    if(root == NULL) return -1;
    int l = maxHeightOfTree(root->left);
    int r = maxHeightOfTree(root->right);
    return max(l, r) + 1;
}
Node* inputTree()
{
    int val;
    cin >> val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue<Node*> qu;
    if(root) qu.push(root);
    while(!qu.empty())
    {
        //1. pick from queue
        Node* parent = qu.front();
        qu.pop();

        //2. Required Work
        int l, r;
        cin >> l >> r;
        Node* myLeft;
        Node* myRight;
        if(l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if(r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        //Connection
        parent->left = myLeft;
        parent->right = myRight;
        //3. Push the children
        if(parent->left)
            qu.push(parent->left);
        if(parent->right)
            qu.push(parent->right);

    }

    return root;
}
int main()
{
    Node* root = inputTree();
    cout << maxHeightOfTree(root) << endl;
    
    return 0;
}