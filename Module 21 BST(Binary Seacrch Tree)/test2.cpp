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
Node* arrayToBST(int *arr, int left, int right)
{
    if(left > right) return nullptr;
    int mid = (left + right) / 2;
    Node* root = new Node(arr[mid]);
    Node* leftSubTree = arrayToBST(arr, left, mid -1);
    Node* rightSubTree = arrayToBST(arr, mid + 1, right);
    root->left = leftSubTree;
    root->right = rightSubTree;
    return root;
}
int main()
{
    
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Node* root = arrayToBST(arr, 0, n - 1);
    printLevelOrder(root);
    
    return 0;
}
