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
void deleteAtPosition(Node* head, int pos)
{
    Node* tmp = head;
    for(int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete deleteNode;
}
void deleteTail(Node*&head, Node*& tail)
{
    Node* deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    if(tail == NULL) //if  1 node in LL
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
}
void deleteHead(Node*& head, Node*& tail)
{
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    if(head == NULL) // if  1 node in LL
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;
}
int main()
{
    /*Node* head = new Node(10);
      Node* tail = head*/
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);

    Node* tail = c;

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

    // deleteAtPosition(head, 0);
    // deleteTail(tail);
    int pos; cin >> pos;
    if(pos >= sizeofDll(head))
    {
        cout << "Invalid" << endl;
        return 0;
    }
    else if(pos == 0)
    {
        deleteHead(head, tail);
    }
    else if(pos == sizeofDll(head)-1)
    {
        deleteTail(head, tail);
    }
    else
    {
        deleteAtPosition(head, pos);
    }
    printDllForward(head);
    printDllReverse(tail);
    
    return 0;
}