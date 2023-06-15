#include<stdio.h>
#include<stdlib.h>
#define true 1
typedef struct Node
{
    int val;
    struct Node* next;
    
}Node;
void constructorOfClass(Node* nd, int val)
{
    nd->val = val;
    nd->next = NULL;
}
void insertNode(Node* head, Node** ha, Node tail, Node* ta, int val)
{
    Node* newNode = (Node*) malloc (sizeof(Node));
    if(head == NULL)
    {
        ha->val = newNode;
        ta->next = tail;
    }
    tail->next = newNode;
    ta->val = newNode;
}
void printLinkedList(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        printf("%d ", tmp->val);
        tmp = tmp->next;
    }
    printf("\n");
}
int main()

{

    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(true)
    {
        scanf("%d", &val);
        if(val == -1) break;
        insertNode(head, &head, tail, &tail, val);
    }
    printLinkedList(head);
    return 0;
}