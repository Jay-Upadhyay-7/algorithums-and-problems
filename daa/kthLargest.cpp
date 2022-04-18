//code for kth largest element
#include<bits/stdc++.h>
using namespace std;
int main(){
  int k=4;
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  priority_queue<int >q; //min heap
  for(int i=0;i<n;i++){
      q.push(a[i]);
      if(q.size()>k){
        q.pop();
      }
  }
  cout<<" "<<q.top();
}