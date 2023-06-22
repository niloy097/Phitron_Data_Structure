//Problem Link: https://leetcode.com/problems/remove-linked-list-elements/

class Solution {
public:
    ListNode* removeElements(ListNode*& head, int val) {

        if(head == NULL) return head;
        if(head->val == val)
        {
            while(true)
            {
                if(head->val != val) break;
                head = head->next;
                if(head == NULL) return head;
            }
        }
        ListNode* tmp = head;
        while(tmp!= NULL)
        {
            if(tmp->next == NULL) break;
            if(tmp->next->val == val)
            {
                ListNode* deleteNode = tmp->next;
                tmp->next = tmp->next->next;
                delete deleteNode;
                if(tmp->next == NULL)
                {
                    break;
                }
                if(tmp->next->val == val)
                {
                    continue;
                }
            }
            tmp = tmp->next;
        }

        return head;

    }
};