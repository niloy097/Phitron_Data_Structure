//Level Order Traversal Of a Binary Tree
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
/*

            My Custom Binary tree

                     7(root)

                   /      \

                  3(a)     6(b)

                 /   \         \

                4(c)   0(d)     8(e)

                  \    /   \     /   \
                 6(f) 7(g) 6(h)  2(i) 5(j)    



*/
void printLevelOrder(Node* root)
{
    if(root == NULL) return;
    queue<Node*> qu;
    qu.push(root);
    while(!qu.empty())
    {
        //1.pick from Line
        Node* parent = qu.front();
        qu.pop();

        //2. Do all required works
        cout << parent->val << " ";

        //3. Push their children into the queue
        if(parent->left) qu.push(parent->left);
        if(parent->right) qu.push(parent->right);
    }
}
int main()
{

    Node* root = new Node(7);
    Node* a = new Node(3);
    Node* b = new Node(6);
    Node* c = new Node(4);
    Node* d = new Node(0);
    Node* e = new Node(8);
    Node* f = new Node(6);
    Node* g = new Node(7);
    Node* h = new Node(6);
    Node* i = new Node(2);
    Node* j = new Node(5);

    //Connection-->
    root->left = a;
    root->right = b;

    a->left = c;
    a->right = d;

    b->right = e;

    c->right = f;

    d->left = g;
    d->right = h;

    e->left = i;
    e->right = j;
    
    printLevelOrder(root);
    return 0;
}