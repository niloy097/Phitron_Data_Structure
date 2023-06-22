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
int sizeofDll(Node* head) //O(n)
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
void insertNodeAtPositin(Node* head, int pos, int val) //O(n)
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
void insertAtHead(Node*& head, Node*& tail, int val) //O(1)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;

    head = newNode;

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
    //Node declaration-->
    /*Node* head = NULL;
    Node* tail = NULL;*/
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
    cout << "Enter pos and val: ";
    cin >> pos >> val;
    // insertAtTail(head, tail, val);
    if(pos > sizeofDll(head))
    {
        cout << "Invalid" << endl;
        return 0;
    }
    else if(pos == 0)
    {
        insertAtHead(head, tail, val);
    }
    else if(pos == sizeofDll(head))
    {
        insertAtTail(head, tail, val);
    }
    else
    {
        insertNodeAtPositin(head, pos, val);
    }
    //Printing DLinkedList Forward and Backward
    printDllForward(head);
    printDllReverse(tail);
    cout << sizeofDll(head) << endl;
    // cout << head->val << endl;
    // cout << tail->val << endl;
    return 0;
}