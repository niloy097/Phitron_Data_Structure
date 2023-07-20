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
    Node* root;
    cin >> val;
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue<Node*> qu;
    qu.push(root);
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

        parent->left = myLeft;
        parent->right = myRight;

        if(parent->left) qu.push(parent->left);
        if(parent->right) qu.push(parent->right); 
         
    }
    return root;
}
void printLevelOrder(Node* root)
{
    queue<Node*> qu;
    qu.push(root);
    while(!qu.empty())
    {
        Node* parent = qu.front();
        qu.pop();

        cout << parent->val << " ";

        if(parent->left) qu.push(parent->left);
        if(parent->right) qu.push(parent->right);
    }
}
bool search(Node* root, int x)
{
    if(root == NULL) return false;
    if(root->val == x) return true;
    if(x < root->val)
    {
        bool s1 = search(root->left, x);
        return s1; 
    }
    else
    {
        bool s2 = search(root->right, x);
        return s2;
    }
}
void insert(Node*& root, int x)
{
    if(root == NULL)
    {
        root = new Node(x);
        return;
    }
    if(x < root->val)
    {
        if(root->left == NULL)
        {
            root->left = new Node(x);
        }
        else
        {
            insert(root->left, x);
        }
    }
    else
    {
        if(root->right == NULL)
        {
            root->right = new Node(x);
        }
        else
        {
            insert(root->right, x);
        }
    }
}
void insertManually(Node* root, int x)
{
    Node* cur = root;
    while(true)
    {
        if(x < cur->val)
        {
            if(cur->left == NULL)
            {
                cur->left = new Node(x);
                break;
            }
            else
            {
                cur = cur->left;
            }
        }
        else
        {
            if(cur->right == NULL)
            {
                cur->right = new Node(x);
                break;
            }
            else
            {
                cur = cur->right;
            }
        }
    }
}
int main()
{
    Node* root = inputTree();
    int val;
    cout << "Enter the target val: "; cin >> val;
    insertManually(root, val);
    printLevelOrder(root);
    return 0;
}
