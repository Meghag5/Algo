//https://practice.geeksforgeeks.org/problems/flattening-a-linked-list/1#

Node* mergeTwoLists(Node* l1, Node* l2) {
        Node* ans = new Node(0);
        Node* head = ans;
        
        while(l1 && l2){
            if(l1->data <= l2->data){
                ans->bottom = l1;
                l1 = l1->bottom;
            }
            else{
                ans->bottom = l2;
                l2 = l2->bottom;
            }
            ans = ans->bottom;
        }
        
        while(l1){
            ans->bottom = l1;
            l1 = l1->bottom;
            ans = ans->bottom;
        }
        
        while(l2){
            ans->bottom = l2;
            l2 = l2->bottom;
            ans = ans->bottom;
        }
        
        return head->bottom;
    }
Node *flatten(Node *root)
{
   if(root == NULL || root->next == NULL){
       return root;
   }
   
   root->next = flatten(root->next);
   root = mergeTwoLists(root,root->next);
   
   return root;
}

