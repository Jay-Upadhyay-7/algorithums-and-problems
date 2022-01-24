// delete such that
// 1 2 3 4 4 4 5 5 = 1 2 4 5
// 1 2 3 3 4 5 5= 1 2 3 4 5
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
        ListNode *head2=head;
        if(head2==NULL||head2->next==NULL){
            return head;
        }
        while(head2->next!=NULL){
        if(head2->val==head2->next->val){
            head2->next=head2->next->next;
        }
        if(head2->next!=NULL&&head2->val!=head2->next->val){
        head2=head2->next;}
    }
        return head;}
};
