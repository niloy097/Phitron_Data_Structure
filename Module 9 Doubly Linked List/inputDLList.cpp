#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* prev;
        Node *next;
    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};
void printDllForward(Node* head) //O(n)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void printDllReverse(Node* tail) //O(n)
{
    Node* tmp = tail;
    while(tmp != NULL)
    {
        cout << tmp->val <<  " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
void insertAtTail(Node*& head, Node*& tail , int val) //O(1)
{
    Node* newNode = new Node(val);
    if(tail == NULL)
    {   
        head =  newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;

    tail = newNode;
}
int main()
{

    Node* head =  NULL;
    Node* tail = NULL;

    int val;
    while(true)
    {
        cin >> val;
        if(val == -1) break;
        insertAtTail(head, tail, val);
    }
    
    printDllForward(head);
    printDllReverse(tail);
    return 0;
}