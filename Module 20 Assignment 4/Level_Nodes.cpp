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
    if(root == NULL) return -1;
    return 1 + max(maxHeight(root->left), maxHeight(root->right));
}
void printLvl(Node* root, int l)
{
    if(root == NULL) return;
    queue<pair<Node*, int>> qu;
    qu.push({root, 0});
    while(!qu.empty())
    {
        pair<Node*,int> pr = qu.front();
        qu.pop();
        Node* node = pr.first;
        int lvl = pr.second;
        if(lvl == l) cout << node->val << " ";
        if(node->left) qu.push({node->left, lvl+1});
        if(node->right) qu.push({node->right, lvl+1});
    }
    
}
int main() {
    Node* root = inputTree();
    int x;
    cin >> x;
    if(x > maxHeight(root)) cout << "Invalid" << endl;
    else
    {
        printLvl(root, x);
    }

    return 0;
}