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
    tmp->next = newNode;
}
void printLikedList(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl << endl;
}
int isLLSortedInAscenOrNot(Node* head)
{
    Node* tmp = head;
    bool flag = true;
    while(true)
    {
        if(tmp->next == NULL) break;
        if(tmp->val > tmp->next->val)
        {
            flag = false;
            break;
        }
        tmp = tmp->next;
    }
    return flag;
}
int main()
{

    Node* head = NULL;
    int val;
    while(true)
    {
        cin >> val;
        if(val == - 1)
        {
            break;
        }
        inserAtTail(head, val);
    }
    if(isLLSortedInAscenOrNot(head) == true) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}