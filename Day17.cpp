//M-01
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head)return false;
        unordered_set<ListNode*>us;
        while(head){
            if(us.find(head)!=us.end()){
                return true;
            }
            us.insert(head);
            head = head->next;
        }
        return false;
    }
};
//M-02
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
