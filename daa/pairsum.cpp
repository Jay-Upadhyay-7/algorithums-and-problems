#include<iostream>
using namespace std;
int main(){
  int n;
  int key;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  cin>>key;
  int i=0,j=n-1;
  while(i<j){
    if(a[i]+a[j]==key){
      cout<<a[i]<<" "<<a[j];
      break;
    }
    else if(a[i]+a[j]>key){
      j--;
    }
    else{
      i++;
    }
  }
  

}
