//https://leetcode.com/problems/remove-nth-node-from-end-of-list/submissions/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0, i = 0;
        ListNode* current = head;
        
        while(current){
            current = current->next;
            count++;
        }
        
        current = head;
        if(n==count){
            return current->next;
        }
        
        while(i < count-n-1){
            current = current->next;
            i++;
        }
        
        ListNode* temp = current->next;
        current->next = temp->next;
        
        return head;
    }
};
