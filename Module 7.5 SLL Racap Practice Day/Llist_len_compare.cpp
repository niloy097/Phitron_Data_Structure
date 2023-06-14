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
bool LlLenCmp(int x, int y)
{
    return (x == y);
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
        insertAttail(head, tail, val);
    }
    int LLOneLen = lenOFLinkedList(head);

    Node* nHead = NULL;
    Node* nTail = NULL;
    int nVal;
    while(true)
    {
        cin >> nVal;
        if(nVal == -1) break;
        insertAttail(nHead, nTail, nVal);
    }
    int LLTwoLen = lenOFLinkedList(nHead);
    if(LlLenCmp(LLOneLen, LLTwoLen) == true) cout << "YES";
    else cout << "NO";

    return 0;
}