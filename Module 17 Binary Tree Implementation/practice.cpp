#include<bits/stdc++.h>
using namespace std;
class BNode{
    public:
        int val;
        BNode* left;
        BNode* right;
    BNode(int val)
    {
        this -> val = val;
        this -> left = NULL;
        this -> right = NULL;
    }
};
/*
        
        My Custom Bin tree
        
                7
            /       \
          10        11
        /   \         \
       6     4         0
       \    /        /   \
       9   12       5    78

    Pre- 7 10 6 9 4 12 11 0 5 78
    In = 6 9 10 12 4 7 11 5 0 78
    Post = 9 6 12 4 10 5 78 0 11 7


*/

void printPreOrder(BNode* root)
{
    if(root == NULL) return;
    cout << root->val << " ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}
void printPostOrder(BNode* root)
{
    if(root == NULL) return;
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout << root->val << " ";
}
void printInOrder(BNode* root)
{
    if(root == NULL) return;
    printInOrder(root->left);
    cout << root->val << " ";
    printInOrder(root->right);
}
int main()
{
    BNode* root = new BNode(7);
    BNode* a = new BNode(10);
    BNode* b = new BNode(11);
    BNode* c = new BNode(6);
    BNode* d = new BNode(4);

    BNode* e = new BNode(0);
    BNode* f = new BNode(9);
    BNode* g = new BNode(12);
    BNode* h = new BNode(5);
    BNode* i = new BNode(78);

    //Connection-->
    root->left = a;
    root->right = b;

    a->left = c;
    a->right = d;

    c->right = f;

    d->left = g;

    b->right = e;

    e->left = h;
    e->right = i;

    printPreOrder(root);
    cout << endl;
    printInOrder(root);
    cout << endl;
    printPostOrder(root);

    return 0;
}