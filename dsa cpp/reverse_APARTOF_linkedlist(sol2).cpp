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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL || head->next==NULL||left==right){
            return head;
        }
    
        int l=left;
        ListNode * p=head,*q=head;
        ListNode * t=head;
        int k=left-2;
        while(--left){
            if(left<=k){
                q=q->next;
            }
            p=p->next;
        }
        if(l==1){
            q=NULL;
        }
        while(--right){
            t=t->next;
        }
        cout<<t->val;
        if(l==1&&t->next==NULL){
            ListNode *prev=NULL,*curr=head;
            while(curr!=NULL){
            ListNode *temp=curr->next;
                curr->next=prev;
                prev=curr;
                curr=temp;
            }
            return prev;
        }
        if(l==1){
            head=t;
        }
        else
        q->next=t;
        ListNode *prev=t->next;
         
        ListNode * e=t->next;
        while(t->next==e){
            ListNode *nxt=p->next;
            p->next=prev;
            prev=p;
            p=nxt;
            cout<<endl;
        }
        return head;
    }
};
