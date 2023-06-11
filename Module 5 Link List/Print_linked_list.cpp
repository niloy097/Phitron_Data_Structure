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
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    //Linking(worst way)
    head->next = a;
    a->next = b;
    b->next =c;
    c->next = d;
    //printing liked lisst(worst way)
    /*cout << head->val << endl;
    cout << head->next->val << endl;
    cout << head->next->next->val << endl;
    cout << head->next->next->next->val << endl;
    cout << head->next->next->next->next->val << endl;*/
    //Semi - Good way to print liked list-->
    /*while(head != NULL) // but here is a problem we lost the head pointer
    {
        cout << head->val << endl;
        head = head->next;
    }*/
    //Proper way to print with temporary pointer-->
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
    //if we again want to print the linked list we have to set the tmp to
    //head again for the lost
    tmp = head;
    cout << "Again Printing same Node" << endl;
    while(tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
    return 0;
}