class Solution {
public:
    int getSize(ListNode* head)
    {
        ListNode* tmp = head;
        int cnt = 0;
        while(tmp != NULL)
        {
            cnt++;
            tmp = tmp->next;
        }
        return cnt;
    }
    ListNode* removeNthFromEnd(ListNode*& head, int n) {
        
        if(head == NULL) return head;
        int x = getSize(head) - n;
        if(x == 0)
        {
            head = head->next;
            return head;
        }
        else
        {
            ListNode* tmp = head;
            for(int i = 1; i <= x - 1; i++)
            {
                tmp = tmp->next;
            }
            ListNode* deleteNode = tmp->next;
            tmp->next = tmp->next->next;
            delete deleteNode;
        } 
        return head;
    }
};