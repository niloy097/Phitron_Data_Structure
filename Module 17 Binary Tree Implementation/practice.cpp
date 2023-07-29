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
Node* inputTree()
{
    int val;
    cin >> val;
    Node* root;
    queue<Node*> qu;
    if(val == -1) root = NULL;
    else root = new Node(val);
    if(root) qu.push(root);
    while(!qu.empty())
    {
        Node* parent = qu.front();
        qu.pop();
        int l, r;
        Node* myLeft;
        Node* myRight;
        cin >> l >> r;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        parent->left  = myLeft;
        parent->right = myRight;

        if(parent->left) qu.push(parent->left);
        if(parent->right) qu.push(parent->right);

    }
    return root;
}
void printLevelOrder(Node* root)
{
    if(root ==  NULL) return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node* parent = q.front();
        q.pop();

        cout << parent->val <<  " ";

        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }
}
void printPreOrder(Node* root)
{
    if(root == NULL) return;
    cout << root->val << " ";
    printPreOrder(root->left);
    printLevelOrder(root->right);
}
void printInOrder(Node* root)
{
    if(root == NULL) return;
    printInOrder(root->left);
    cout << root->val << " ";
    printInOrder(root->right);
}
void printPostOrder(Node* root)
{
    if(root == NULL) return;
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout << root->val << " ";
}
int main()
{
    Node* root = inputTree();
    cout << "Level-Order: "; printLevelOrder(root);
    cout << endl;
    cout << "Pre-Order: "; printPreOrder(root);
    cout << endl;
    cout << "In-Order: "; printInOrder(root);
    cout << endl;
    cout << "Post-Order: "; printPostOrder(root);

    return 0;
}