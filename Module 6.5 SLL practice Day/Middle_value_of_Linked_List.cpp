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
void inserAtTail(Node *&head, int val)
{
    Node* newNode = new Node(val);

    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node * tmp = head;
    while(tmp->next !=  NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void printMidlleValueOfLL(Node* head, int len)
{
    Node* tmp = head;
    if(len % 2 != 0) // Odd len value 1 
    {
        for(int i = 1; i <= (len/2); i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val << endl;
    }
    else
    {
        for(int i = 1; i < (len/2); i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val << " ";
        cout << tmp->next->val << endl;
    }
}
int main()
{

    Node* head = NULL;
    int val;
    int len = 0;
    while(true)
    {
        cin >> val;
        if(val == -1) break;
        inserAtTail(head, val);
        len++;
    
    }
    printMidlleValueOfLL(head, len);
    return 0;
}