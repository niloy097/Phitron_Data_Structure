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
    int val;
    vector <int> freq (101, 0);
    while(true)
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
        freq[val]++;
    }
    bool flag = false;
    for(int i = 0; i < 101; i++)
    {
        if(freq[i] != 0)
        {
            if(freq[i] > 1)
            {
                flag = true;
                break;
            }
        }
    }
    if(flag == true) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}