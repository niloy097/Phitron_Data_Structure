#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        string str;
        Node* prev;
        Node* next;
    Node(string str)
    {
        this->str = str;
        this->prev = NULL;
        this->next = NULL;
    }
};
void insertAtTail(Node*& head, Node*& tail, string str)
{
    Node* newNode = new Node(str);
    if(tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
void printLLF(Node* head)
{
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->str << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void printLLB(Node* tail)
{
    Node* tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->str << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
int main()
{

    Node* head = NULL;
    Node* tail = NULL;
    string s;
    while(true)
    {
        cin >> s;
        if(s == "end") break;
        insertAtTail(head, tail, s);
    }
    Node* tmp = head;
    // printLLF(head);
    // printLLB(tail);
    int q;
    cin >> q;
    getchar();
    while (q--)
    {
        string st;
        getline(cin, st);
        stringstream ss(st);
        string word;
        int cnt = 0;
        string lstr;
        while(ss >> word)
        {
            cnt++;
            lstr = word;
        }
        // cout << cnt << endl;
        // cout << "last word: " << lstr << endl;
        if(cnt == 2)
        {
            //Forward
            Node* xtmp = tmp;
            while(xtmp->next != NULL)
            {
                if(xtmp->str == lstr)
                {
                    tmp = xtmp;
                    break;
                }
                xtmp = xtmp->next;
            }
           
            if(xtmp->str == lstr)
            {
                tmp = xtmp;
                cout << tmp->str << endl;
            }
            else{
               //Backward
               Node* TMP = tmp;
                while(TMP->prev != NULL)
                {
                    if(TMP->str == lstr)
                    {
                        // cout << "Equql to str" << endl;
                        tmp = TMP;
                        break;
                    }
                    TMP = TMP->prev;
                }
                
            if(TMP->str == lstr)
            {
                tmp = TMP;
                cout << tmp->str << endl;
            }
            else{
                cout << "Not Available" << endl;
            }
            }
            
        }
        else if(lstr == "prev")
        {
            if(tmp->prev == NULL)
            {
                cout << "Not Available" << endl;
            }
            else
            {
                cout << tmp->prev->str << endl;
                tmp = tmp->prev;
            }
        }
        else if(lstr == "next")
        {
            if(tmp->next == NULL)
            {
                cout << "Not Available" << endl;
            }
            else
            {
                cout << tmp->next->str << endl;
                tmp = tmp->next;
            }
        }
    }
    

    return 0;
}