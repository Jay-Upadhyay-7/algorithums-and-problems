 void solve(stack<int> &Stack,int count,int n){
        if(count==n/2){
            Stack.pop();
            return;
        }
        int a=Stack.top();
        Stack.pop();
        solve(Stack,count+1,n);
        Stack.push(a);
 
    }
void deleteMiddle(stack<int>&inputStack, int N){
	
  int count=0;
   solve(inputStack,count,N);
   
}

  
 
