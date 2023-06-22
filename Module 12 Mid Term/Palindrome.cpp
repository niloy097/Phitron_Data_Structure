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
void insertAtTail(Node*& head, Node*& tail, int val)
{
        Node* newNode = new Node(val);
        if(tail == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
}
void copySLL(Node*& head, Node*& tail, Node*& nHead, Node*& nTail)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        insertAtTail(nHead, nTail, tmp->val);
        tmp = tmp->next;
    }
}
bool isPalindrome(Node* head, Node* nHead) 
{
    Node* tmp = head;
    Node* tmp2 = nHead;
    while(tmp != NULL)
    {
        if(tmp->val != tmp2->val)
        {
            return false;
        }
        tmp = tmp->next;
        tmp2 = tmp2->next;
    }
    return true;
}
void Reverse(Node*& nHead, Node* cur)
{
    if(cur->next == NULL)
    {
        nHead = cur;
        return;
    }
    Reverse(nHead, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
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
        insertAtTail(head, tail, val);
    }
    Node* nHead = NULL;
    Node* nTail = NULL;
    copySLL(head, tail, nHead, nTail);
    Reverse(nHead, nHead);
    if(isPalindrome(head, nHead) == true) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}