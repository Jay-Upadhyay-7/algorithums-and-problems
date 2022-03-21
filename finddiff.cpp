#include<iostream>
using namespace std;
int main(){
  int n;
  int temp,count=0;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  cin>>temp;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(a[i]-a[j]==temp||a[i]-a[j]==-(temp)){
        count++;
      }
    }
  }
    cout<<count;
  }
