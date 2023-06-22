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
void printDllForward(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void printDllReverse(Node* tail)
{
    Node* tmp = tail;
    while(tmp != NULL)
    {
        cout << tmp->val <<  " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
int main()
{
    //Node declaration-->
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = b; // tail tracking

    //Node connection Doubly
    //Connection-1:
    head->next = a;
    a->prev = head;

    //Connection-2:
    a->next = b;
    b->prev = a;

    //Printing DLinkedList Forward and Backward
    printDllForward(head);
    printDllReverse(tail);
    return 0;
}