//https://leetcode.com/problems/merge-two-sorted-lists/submissions/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode();
        ListNode* head = ans;
        
        while(l1 && l2){
            if(l1->val <= l2->val){
                ans->next = l1;
                l1 = l1->next;
            }
            else{
                ans->next = l2;
                l2 = l2->next;
            }
            ans = ans->next;
        }
        
        while(l1){
            ans->next = l1;
            l1 = l1->next;
            ans = ans->next;
        }
        
        while(l2){
            ans->next = l2;
            l2 = l2->next;
            ans = ans->next;
        }
        
        return head->next;
    }
};
