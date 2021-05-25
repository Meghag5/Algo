//https://leetcode.com/problems/linked-list-cycle-ii/submissions/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* helper(ListNode* head){
        ListNode *slow = head, *fast = head;
        
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
                return slow;
        }
        
        return NULL;
    }
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head, *fast = head;
        slow = helper(slow);
        
        if(slow == NULL)
            return NULL;
        
        while(slow!=fast){
            slow = slow->next;
            fast = fast->next;
        }
        
        return slow;
    }
};
