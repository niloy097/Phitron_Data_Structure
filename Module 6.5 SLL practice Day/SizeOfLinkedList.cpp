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
int main()

{

    Node* head = NULL;
    int val;
    
    int cnt = 0;
    while(true)
    {
        cin >> val;
        if(val == -1) break;
        inserAtTail(head, val);
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}