//Binary Tree Input
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
        this->right = NULL;
        this->left = NULL;
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
Node* inputBinTree()
{
    int val;
    Node* root;
    cin >> val;
    if(val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> qu;
    if(root) qu.push(root);
    
    while(!qu.empty())
    {
        Node* parent = qu.front();
        qu.pop();

        int l, r;
        cin >> l >> r;
        Node* myLeft;
        Node* myRight;
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

    Node* root = inputBinTree();
    printLevelOrder(root);
    

    return 0;
}