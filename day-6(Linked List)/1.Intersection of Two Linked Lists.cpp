//https://leetcode.com/problems/intersection-of-two-linked-lists/submissions/

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp1 = headA, *temp2 = headB;
        
        while(temp1){
            temp2 = headB;
            while(temp2){
                if(temp1 == temp2 && temp1->val == temp2->val){
                    ListNode* ans = temp1;
                    return ans;
                }
                temp2 = temp2->next;
            }
            temp1 = temp1->next;
        }
        
        return NULL;
    }
};
