link:https://leetcode.com/problems/remove-nth-node-from-end-of-list/
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * h=head;
        if(n==0){
            return head;
        }
        if(h->next==NULL&&n==1){
            head=NULL;
            return head;
        }
        int count=0;
        while(h!=NULL){
            count++;
            h=h->next;
        }
        count=count-n;
        if(count==0){
            return head->next;
        }
        h=head;
        while(--count){
            h=h->next;

        }
        
        h->next=h->next->next;
        return head;
    }
};
