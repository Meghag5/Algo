//https://leetcode.com/problems/delete-node-in-a-linked-list/submissions/

class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
        return;
    }
};
