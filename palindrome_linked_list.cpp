class Solution {
public:
    ListNode* midOfList(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* reverseList(ListNode* head) {
        if (!head || !head->next)
            return head;
        ListNode *sHead = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;
        return sHead;
    }
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next)
            return head;
        // first find the mid of linked list
        ListNode* mid = midOfList(head);
        // reverse last half of linkedlist
        mid->next = reverseList(mid->next);
        // create two pointers one from start and another from mid 
        ListNode* first = head;
        ListNode* second = mid->next;
        while(second) {
            if (first->val != second->val)
                return false;
            first = first->next;
            second = second->next;
        }
        return true;
    }
};