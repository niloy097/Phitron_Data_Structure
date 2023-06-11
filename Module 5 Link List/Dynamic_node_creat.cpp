#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
int main()
{

    Node* head = new Node(10); //Dynamic Node
    Node* a = new Node(20);
    head->next = a; // short cut
    // (*head).next = a; // Long cut
    cout << head->val << endl; // Short cut
    cout << (*head).val << endl; // long cut
    cout << head->next->val << endl; // short cut
    cout << (*(*head).next).val << endl;// long cut

    return 0;
}