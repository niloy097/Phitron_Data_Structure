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
int sizeofDll(Node* head)
{
    Node* tmp = head;
    int cnt = 0;
    while(tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
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
void insertNodeAtPositin(Node* head, int pos, int val)
{
    Node* newNode = new Node(val);
    Node* tmp = head;
    for(int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    //First Connection
    newNode->next = tmp->next; //100 -> 30
    tmp->next = newNode; //20 -> 100

    //Second Connection
    newNode->next->prev = newNode; // 100 <- 30
    newNode->prev = tmp; // 20 <- 100
}
int main()
{
    //Node declaration-->
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);

    Node* tail = c; // tail tracking

    //Node connection Doubly
    //Connection-1:
    head->next = a;
    a->prev = head;

    //Connection-2:
    a->next = b;
    b->prev = a;

    //Connection-3:
    b->next = c;
    c->prev = b;

    //Inserting at position
    int pos; int val;
    cout << "Enter val and position: ";
    cin >> pos >> val;
    if(pos >= sizeofDll(head))
    {
        cout << "Invalid" << endl;
    }
    else
    {
        insertNodeAtPositin(head, pos, val);
    }
    //Printing DLinkedList Forward and Backward
    printDllForward(head);
    printDllReverse(tail);
    cout << sizeofDll(head) << endl;
    return 0;
}