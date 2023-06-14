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
void insertAttail(Node*& head, Node*& tail, int val)
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
void printMiddleElemetOfLL(Node* head, int len)
{
    Node* tmp = head;
    int mid = len / 2;
    if(len % 2 != 0)
    {
        for(int i = 1; i <= mid; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val << endl;
    }
    else
    {
        for(int i = 1; i < mid; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val << " " << tmp->next->val << endl;
    }
}
int lenOFLinkedList(Node* head)
{
    Node* tmp = head;
    int len = 0;
    while(tmp != NULL)
    {
        len++;
        tmp = tmp->next; 
    }
    return len;
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
        insertAttail(head, tail, val);
    }
    printMiddleElemetOfLL(head, lenOFLinkedList(head));
    return 0;
}