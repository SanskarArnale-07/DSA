class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head;
        while(curr != nullptr && curr->next != nullptr){
            ListNode* next = curr->next;
            int g = gcd(curr->val, next->val);
            curr->next = new ListNode(g);
            curr->next->next = next;
            curr = next;
        }        
        return head;
    }
};