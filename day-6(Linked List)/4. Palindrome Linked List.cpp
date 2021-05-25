//https://leetcode.com/problems/palindrome-linked-list/submissions/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode *next,*prev,*current;
        current = head;
        prev = NULL;
        
        while(current){
            next = current->next; 
            current->next = prev;
            prev = current;
            current = next;
        }
        
        head = prev;
        return head;
    }
    bool isPalindrome(ListNode* head) {
        ListNode *slow = head, *fast = head;
        
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        slow = reverse(slow);
        
        while(slow && head){
            if(slow->val != head->val){
                return false;
            }
            head = head->next;
            slow = slow->next;
        }
        
        return true;
    }
};
