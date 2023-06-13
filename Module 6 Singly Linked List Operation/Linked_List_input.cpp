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
    cout << endl << endl;
}
int main()
{

    int val;
    Node* head = NULL;
    while(true)
    {
        cin >> val;
        if(val == -1) break;
        inserAtTail(head, val);

    }
    
    printLikedList(head);
    return 0;
}