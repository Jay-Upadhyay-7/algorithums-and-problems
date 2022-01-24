//https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/
//1->2->3->3->3->4->4->5 = 1->2->5
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        else if(head->val!=head->next->val){
            head->next=deleteDuplicates(head->next);
            return head;
        }
        while(head->next!=NULL&&head->val==head->next->val){
            head=head->next;
        }
        deleteDuplicates(head);
        return head->next;
    }
};
