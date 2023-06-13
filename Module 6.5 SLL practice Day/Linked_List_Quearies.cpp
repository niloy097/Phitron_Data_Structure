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
void printLikedList(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
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
void insertAtAnyPosition(Node* head, int pos, int val)
{
    Node* newNode = new Node(val);
    Node* tmp = head;
    for(int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if(tmp == NULL) // error solving
        {
            cout << "Invalid" << endl;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    printLikedList(head);
}
void inserAtHead(Node*& head, int val)
{
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode; //Question
    printLikedList(head);
}
int main()
{

    Node* head = NULL;
    int val_LL;
    while(true)
    {
        cin >> val_LL;
        if(val_LL == -1) break;
        inserAtTail(head, val_LL);
    }
    int q;
    cin >> q;
    while(q--)
    {
        int pos, val;
        cin >> pos >> val;
        if(pos == 0)
        {
            inserAtHead(head, val);
        }
        else
        {
            insertAtAnyPosition(head, pos, val);
        }
    }

    return 0;
}