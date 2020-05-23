class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head->next == nullptr)
            return head;
        ListNode *first = head;
        ListNode *second = head;
        while(second->next != nullptr){
            second = second->next;
            if(second->next == nullptr){
                first = first->next;
                return first;
            }
            second = second->next;
            first = first->next;
        }
        return first;
    }
};
