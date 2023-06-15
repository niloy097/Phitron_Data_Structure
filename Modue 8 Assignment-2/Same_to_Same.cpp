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
bool cmpLinkedList(Node* head, int len1, Node* nHead, int len2)
{
    if(len1 == len2)
    {
        Node* tmp1 = head;
        Node* tmp2 = nHead;
        while(tmp1 != NULL)
        {
            if(tmp1->val != tmp2->val)
            {
                return false;
            }
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }
        return true;
    }
    else
    {
        return false;
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
    int len1 = lenOfLinkedList(head);
    Node* nHead = NULL;
    Node* nTail = NULL;
    int nVal;
    while(true)
    {
        cin >> nVal;
        if(nVal == -1) break;
        insertNode(nHead, nTail, nVal);
    }
    int len2 = lenOfLinkedList(nHead);
    if(cmpLinkedList(head,len1,nHead,len2) == true) cout << "YES" << endl;
    else cout << "NO" << endl;
    

    return 0;
}