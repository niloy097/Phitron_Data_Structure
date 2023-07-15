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
void pushLevelOrder(Node* root, vector<int>& v)
{
    queue<Node*> qu;
    qu.push(root);
    while(!qu.empty())
    {
        Node* parent = qu.front();
        qu.pop();

        v.push_back(parent->val);

        if(parent->right) qu.push(parent->right);
        if(parent->left) qu.push(parent->left);
    }

}
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
int main() {
    vector<int> v;
    Node* root = inputTree();
    pushLevelOrder(root, v);
    reverse(v.begin(), v.end());
    for(int val : v)
    {
        cout << val << " ";
    }
    
    return 0;
}