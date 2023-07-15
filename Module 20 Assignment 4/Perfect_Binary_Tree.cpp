#include <bits/stdc++.h>
using namespace std;
class Node{
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
    queue<Node*> q;
    cin >> val;
    if(val == -1) root = NULL;
    else root = new Node(val);
    if(root)q.push(root);
    while(!q.empty())
    {
        Node* parent = q.front();
        q.pop();
        int l, r;
        Node* mL;
        Node* mR;
        cin >> l >> r;
        if(l == -1) mL = NULL;
        else mL = new Node(l);
        if(r == -1) mR = NULL;
        else mR = new Node(r);
        
        
        parent->left = mL;
        parent->right = mR;
            
        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }
    return root;
}
int maxHeight(Node* root)
{
    if(root == NULL) return 0;
    return 1 + max(maxHeight(root->left), maxHeight(root->right));
}
int totalNodes(Node* root)
{
    if(root == NULL) return 0;
    return 1+totalNodes(root->left)+totalNodes(root->right);
}
bool isPerfectTree(Node* root, int totalN, int mH)
{
    int real = pow(2, mH) - 1;
    return real == totalN;
}
int main() {
    Node* root = inputTree();
    if(isPerfectTree(root, totalNodes(root), maxHeight(root))) cout << "YES" <<endl;
    else cout << "NO" << endl;
    return 0;
}