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
class Stack
{
    Node* head = NULL;
    int sz = 0;

    public:
    
    void push(int val)
    {
        sz++;
        Node* newNode = new Node(val);
        if(head == NULL)
        {
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }

    void pop()
    {
        sz--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
    }

    int top()
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
class Queue {

    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    public:

    
    void push(int val) {
        sz++;
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

    void pop() {
        sz--;
        int val = head->val;
        Node* tmp = head;
        head = head->next;
        if(head == NULL)
        {
            tail = NULL;
        }
        delete tmp;
        
    }
    int size()
    {
        return sz;
    }
    int front() {
    
        return head->val;
    }
    bool isEmpty() {

        return sz == 0;
    }

};
bool compare(Stack st, Queue qu, int s1, int s2)
{
    if(s1 != s2) return false;
    else
    {
        while(!st.isEmpty())
        {
            if(st.top() != qu.front()) return false;
            st.pop(), qu.pop();
        }
        return true;
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    Stack st;
    Queue qu;
    for(int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    for(int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        qu.push(val);
    }
    compare(st, qu, st.size(), qu.size()) == true ?
    cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}