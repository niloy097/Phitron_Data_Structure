#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insertNode(Node*& head, Node*& tail, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int maxInLinkedList(Node* head)
{
    Node* tmp = head;
    int mx = INT_MIN;
    while(tmp != NULL)
    {
        mx = max(mx, tmp->val);
        tmp = tmp->next;
    }
    return mx;
}
int minInLinkedList(Node* head)
{
    Node* tmp = head;
    int mn = INT_MAX;
    while(tmp != NULL)
    {
        mn = min(mn, tmp->val);
        tmp = tmp->next;
    }
    return mn;
}
int main()
{

    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(true)
    {
        cin >> val;
        if(val == -1) break;
        insertNode(head, tail, val);
    }
    cout << maxInLinkedList(head) << " " << minInLinkedList(head);
    return 0;
}