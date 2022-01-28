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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
      ListNode* middle(ListNode* head){
       ListNode* temp=head,*mid=head;
      while(temp!=NULL&&temp->next!=NULL){
            temp=temp->next->next;
            mid=mid->next;
        }
        return mid;
    }
        ListNode* findmidpre(ListNode* node,ListNode* mid){
        
        if(node==NULL||node==mid)
            return NULL;
        
        ListNode* temp=node;
        while(node&&node->next!=mid)
             node=node->next;
        
        if(node)
           node->next=NULL;
        return temp;    
    }
    TreeNode * bst(ListNode* head){
        ListNode* mid=middle(head);
          if(mid==NULL)
            return NULL;
        
        TreeNode * root= new TreeNode(mid->val);
        root->left=bst(findmidpre(head,mid));
        root->right=bst(mid->next);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {

        return bst(head);
       
    }
};
  
