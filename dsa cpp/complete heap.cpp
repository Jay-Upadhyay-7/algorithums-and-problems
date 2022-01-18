#include <iostream>
using namespace std;
int insert(int a[],int n,int value){
  n=n+1;
  a[n]=value;
  int i=n;
  while(i>1){
    int parent=i/2;
    if(a[parent]<a[i]){
      swap(a[parent],a[i]);
      i=parent;
    }
    else{
      return n;
    }
  }
  return n;
}
int deletev(int a[],int n){
  a[1]=a[n];
  n=n-1;
  int i=1;
  while(i<n){
    int left=a[2*i];
    int right=a[2*i+1];
    int larger=left>right?2*i:2*i+1;
    if(a[i]<a[larger]){
      swap(a[i],a[larger]);
      i=larger;
    }
    else{
      return n;
    }
  }
  return n;
}
int main()
{
  int a[50];
  int n = 0;
  n = insert(a, n, 14);
  n = insert(a, n, 12);
  n = insert(a, n, 11);
  n = insert(a, n, 19);
  n = insert(a, n, 192);
  n = insert(a, n, 111);
  n = insert(a, n, 1);
  n = insert(a, n, 8);
  n=deletev(a,n);
  cout<<" heap: ";
  for(int i=1;i<=n;i++){
    cout<<a[i]<<" ";
  }
}
