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
class MyQueue
{
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    public:
    void push(int val)
    {
        sz++;
        Node* newNode = new Node(val);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head == NULL)
        {
            tail = NULL;
        }
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool isEmpty()
    {
        return sz == 0;
    }
};
int main()
{

    MyQueue q;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    while(!q.isEmpty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}