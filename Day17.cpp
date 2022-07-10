class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast = head,*slow = head;
        if(!fast)return false;
        while(fast&&fast->next){
            slow = slow ->next;
            fast = fast ->next->next;
            if(fast==slow)return true;
        }
        return false;
    }
};
