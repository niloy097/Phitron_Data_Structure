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
void sortLinkedListDescOrder(Node* head)
{
    Node* tmp = head;
    for(Node* i = tmp; i->next != NULL; i = i->next)
    {
        for(Node* j = i->next; j !=  NULL; j = j->next)
        {
            if(i->val < j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
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
int lenOfLinkedList(Node* head)
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
void printLinkedList(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
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
    if(lenOfLinkedList(head) == 1)
    {
        printLinkedList(head);
    }
    else if(lenOfLinkedList(head) == 2)
    {
        sortLinkedListDescOrder(head);
        printLinkedList(head);
    }
    else
    {
        sortLinkedListDescOrder(head);
        printMiddleElemetOfLL(head, lenOfLinkedList(head));
    }
    
    

    return 0;
}