//Problem Link: https://leetcode.com/problems/palindrome-linked-list/

class Solution {
public:
    void insertAtTail(ListNode*& head, ListNode*& tail, int val)
    {
        ListNode* newNode = new ListNode(val);
        if(tail == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }
    void reverse(ListNode*& head, ListNode* cur)
    {
        if(cur->next == NULL)
        {
            head = cur;
            return;
        }
        reverse(head, cur->next);
        cur->next->next = cur;
        cur->next = NULL;
    }
    bool isPalindrome(ListNode* head) {

        ListNode* nHead = NULL;
        ListNode* nTail = NULL;
        ListNode* tmp = head;
        ListNode* tmp1 = nHead;
        while(tmp != NULL)
        {
            insertAtTail(nHead, nTail, tmp->val);
            tmp = tmp -> next;
        }
        reverse(nHead, nHead);
        tmp = head;
        ListNode* tmp2 = nHead;
        while(tmp != NULL)
        {
            if(tmp->val != tmp2->val)
            {
                return false;
            }
            tmp = tmp->next;
            tmp2 = tmp2->next;
        }
        return true;
    }
};