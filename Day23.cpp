#M-1
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*>us;
        while(head){
            if(us.find(head)!=us.end())return head;
            us.insert(head);
            head = head -> next;
        }
        return NULL;
    }
};

#M-2
----------------------------------------------
Node* firstnode(Node* head)
{
    if (head == NULL || head->next == NULL)
        return NULL;
    Node *slow = head, *fast = head;
    slow = slow->next;
    fast = fast->next->next;
    while (fast && fast->next) {
        if (slow == fast)
            break;
        slow = slow->next;
        fast = fast->next->next;
    }
    if (slow != fast)
        return NULL;
    slow = head;
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}
