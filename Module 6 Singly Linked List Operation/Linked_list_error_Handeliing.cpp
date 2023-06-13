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
        cout << endl << "Inserted at head" << endl << endl;
        return;
    }

    Node * tmp = head;
    while(tmp->next !=  NULL)
    {
        tmp = tmp->next;
    }
    //after completing this loop tmp will be in last node
    tmp->next = newNode; // connecting Node at tail
    cout << endl << "Inserted at tail" << endl << endl;
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
            cout << endl << endl << "Invalid Position" << endl << endl;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << endl << endl << "Inserted at pos " << pos << endl << endl;
}
void inserAtHead(Node*& head, int val)
{
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode; //Question
    cout << endl << endl <<"Inseted at head" << endl << endl;
}
void deleteFromPosition(Node* head, int pos)
{
    Node* tmp = head;
    for(int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if(tmp == NULL) // error solving
        {
            cout << endl << endl << "Invalid Position" << endl << endl;
            return;
        }
    }
    if(tmp->next == NULL) // error solving
    {
        cout << endl << endl << "Invalid Position" << endl << endl;
        return;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout << endl << "Deleted Position " << pos << endl << endl;
}
void deleteHead(Node*& head)
{
    if(head ==  NULL)
    {
        cout << endl << endl <<"Head Is Not Available" << endl <<endl;
        return;
    }
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout << endl << "Deleted Head" << endl << endl;
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
    cout << endl << endl;
}
int main()
{

    Node* head = NULL;
    while(true)
    {
        cout << "Option-1: Insert at tail" << endl; //No Issue
        cout << "Option-2: Print Liked List" << endl; //No Issue
        cout << "Option-3: Insert at any position" << endl; // No Issue
        cout << "Option-4: Insert at Head" << endl; //No Issue
        cout << "Option-5: Delete from position" << endl; //No issue
        cout << "Option-6: Delete Head" << endl; // No issue
        cout << "OPtion-7: Terminate" << endl; //No isseu
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
            int pos, v;
            cout << "Enter Position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> v;
            if(pos == 0)
            {
                inserAtHead(head, v);
            }
            else
            {
                insertAtAnyPosition(head, pos, v);
            }
        }
        else if(op == 4)
        {
            int val;
            cout << "Enter value: ";
            cin >> val;
            inserAtHead(head, val);
        }
        else if(op == 5)
        {
            int pos;
            cout << "Enter Position: ";
            cin >> pos;
            if(pos == 0)
            {
                deleteHead(head);   
            }
            else
            {
                deleteFromPosition(head, pos);
            }
        }
        else if(op == 6)
        {
            deleteHead(head);
        }
        else if(op == 7)
        {
            break;
        }
        
    }
    return 0;
}