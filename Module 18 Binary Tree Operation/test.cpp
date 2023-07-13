#include<bits/stdc++.h>
using namespace std;
class BinNode
{
    public:
        int val;
        BinNode* left;
        BinNode* right;
    BinNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }    

};

BinNode* inputTree()
{
    int val;
    cin >> val;
    BinNode* root;
    if(val == -1) root = NULL;
    else root = new BinNode(val);
    queue<BinNode*> qu;
    if(root) qu.push(root);
    while(!qu.empty())
    {
        //1. pick from queue
        BinNode* parent = qu.front();
        qu.pop();

        //2. Required Work
        int l, r;
        cin >> l >> r;
        BinNode* myLeft;
        BinNode* myRight;
        if(l == -1)
            myLeft = NULL;
        else
            myLeft = new BinNode(l);

        if(r == -1)
            myRight = NULL;
        else
            myRight = new BinNode(r);

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
int leftSum(BinNode* root)
{
    if(root == NULL) return 0;
    int sum = 0;
    if(root->left)
    {
        sum = sum + root->left->val + leftSum(root->left);
    }
    sum = sum + leftSum(root->right);
    return sum;
}
int main()
{
    BinNode* root =  inputTree();
    cout << leftSum(root) << endl;

    return 0;
}