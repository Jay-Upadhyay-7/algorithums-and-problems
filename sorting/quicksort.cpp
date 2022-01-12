#include<iostream>
using namespace std;
int partition(int a[],int s,int e)
{
  int cnt=0;
  int pivot=a[s];
  //select element find its correct position
  for(int i=s+1;i<=e;i++){
          if(pivot>=a[i]){
            cnt++;
          }
  }
  //place pivot at right position
  int pivotIndex = s + cnt;
  swap(a[pivotIndex], a[s]);
  int i=s;
  int j=e;
  //place all values smaller then pivot in its left and vice versa
  while(i<pivotIndex&&j>pivotIndex){
    while(a[i]<=pivot){
      i++;
  }
  while(a[j]>pivot){
    j--;
  }
  if(i<pivotIndex&&j>pivotIndex){
    swap(a[i++],a[j--]);
  }}
  return pivotIndex;
  
}

void quicksort(int a[],int s,int e){
  if(s>=e){
    return;
  }
  //find pivot element index
  int p=partition(a,s,e);
  //left part sort karte h
  quicksort(a,s,p-1);
  //right part sort krte h
  quicksort(a,p+1,e);
  
}
int main(){
  int a[]={5,35,3,73,2,2,2,5,46,54,28};
  quicksort(a,0,7);
  for(int i=0;i<7;i++){
    cout<<a[i]<<' ';
  }
} 