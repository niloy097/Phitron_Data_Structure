// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
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
void insertAtAnyPosition(Node*& head, Node*& tail, int val)
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
void connectLinkedList(Node* tail, Node* nHead)
{
    tail->next = nHead;
}
void printLinkedList(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp -> next;
    }
    cout << endl;
}
int main() {
    
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(true)
    {
        cin >> val;
        if(val == -1) break;
        insertAtAnyPosition(head, tail, val);
    }
    printLinkedList(head);
    Node* nHead = NULL;
    Node* nTail = NULL;
    int nVal;
    while(true)
    {
        cin >> nVal;
        if(nVal == -1) break;
        insertAtAnyPosition(nHead, nTail, nVal);
    }
    printLinkedList(nHead);
    connectLinkedList(tail, nHead);
    printLinkedList(head);
    return 0;
}