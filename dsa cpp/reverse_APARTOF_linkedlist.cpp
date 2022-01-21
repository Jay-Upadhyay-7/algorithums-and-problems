class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode * beforehead=new ListNode(0);
        beforehead->next=head;
        ListNode * before=beforehead;
        int i=0;
        while(i!=left-1){
            before=before->next;
            i++;
        }
        ListNode* prevNode = nullptr, *currNode = before->next, *nextNode = before->next->next,*start=before->next;
        while(left!=right){
            currNode->next=prevNode;
            prevNode=currNode;
            currNode=nextNode;
            nextNode=nextNode->next;
            left++;
        }
        ListNode * end=currNode->next;
        currNode->next=prevNode;
        before->next=currNode;
        start->next=end;
        return beforehead->next;
        
    }
};
