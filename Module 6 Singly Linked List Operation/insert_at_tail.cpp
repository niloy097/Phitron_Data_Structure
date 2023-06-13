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
    //after completing this loop tmp will be in last node
    tmp->next = newNode; // connecting Node at tail
}
void printLikedList(Node* head)
{
    cout << "Your Linked List: ";
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
    while(true)
    {
        cout << "Option-1: Insert at tail" << endl;
        cout << "Option-2: Print Liked List" << endl;
        cout << "Option-3: Terminate" << endl;
        int op;
        cin >> op;
        if(op == 1)
        {
            cout << "Please Enter Value: ";
            int v;
            cin >> v;
            inserAtTail(head, v);
        }
        else if(op == 2)
        {
            printLikedList(head);
        }
        else if(op == 3)
        {
            break;
        }
        
    }
    return 0;
}