#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
    int key=a[i];
    int j=i-1;
  //   while(a[j]>key&&j>=0){
  //     a[j+1]=a[j];
  //     j--;
  //   }
  //   a[j+1]=key;
  // } or
  while(a[j]>key&&j>=0){
     int temp=a[j];
     a[j]=a[j+1];
     a[j+1]=temp;
     j--;
    }
  }
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }

}