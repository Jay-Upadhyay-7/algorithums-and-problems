void placeSorted(stack<int>&stack,int x){
    if(stack.empty()||stack.top()<x){
        stack.push(x);
        return;
    }
       int temp=stack.top();
       stack.pop();
       placeSorted(stack,x);
       stack.push(temp);
    
}
void sortStack(stack<int> &stack)
{
	if(stack.empty()){
        return;
    }
    int temp=stack.top();
    stack.pop();
    sortStack(stack);
    placeSorted(stack,temp);
}
