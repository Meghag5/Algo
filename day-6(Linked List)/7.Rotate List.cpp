//https://leetcode.com/problems/rotate-list/submissions/

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL || k==0) return head;
        
        ListNode* current = head;
        ListNode* start;
        ListNode* prev;
        int count = 1;
        
        while(current->next){
            current = current->next;
            count++;
        } 
        
        current->next = head;
        k = k%count;
        k = count - k;
        
        cout<<k;
        while(k--){
            current = current->next;
        }
        
        
        head = current->next;
        current->next = NULL;
        
        /*BRUTE FORCE
        ListNode* start;
        ListNode* prev;
        
        while(k--){
            start = head;
        while(current->next){
            prev = current;
            current = current->next;
        }   
        prev->next = current->next;
        current->next = start;
        head = current;
        }*/
        
        return head;
    }
};
