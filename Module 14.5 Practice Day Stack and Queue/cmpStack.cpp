#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:

    int val;
    Node* prev;
    Node* next;

    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};
class Stack
{
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;
    public:
    void push(int val)
    {   sz++;  
        Node* newNode = new Node(val);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node* deleteNode = tail;
        tail = tail->prev;
        delete deleteNode;
        if(tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return sz == 0;
    }
};
bool isSame(Stack a, Stack b, int sz1, int sz2)
{
    if(sz1 == sz2)
    {
        while(!a.empty())
        {
            int x = a.top(), y = b.top();
            if(x != y)
            {
                return false;
            }
            a.pop(), b.pop();
        }
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cin >> n;
    Stack st;
    for(int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    int m;
    cin >> m;
    Stack st1;
    for(int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        st1.push(val);
    }

   isSame(st, st1, st.size(), st1.size()) == true ?
   cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}