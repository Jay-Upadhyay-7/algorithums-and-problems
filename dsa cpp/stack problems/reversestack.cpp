void insertAtBottom(stack<int>&s, int temp){
     if(s.empty()){
        s.push(temp);
        return;
    }
    int k=s.top();
    s.pop();
    insertAtBottom(s,temp);
    s.push(k);
}
void reverseStack(stack<int> &stack) {
    if(stack.empty()){
        return ;
    }
    int temp=stack.top();
    stack.pop();
    reverseStack(stack);
    insertAtBottom(stack,temp);
}
