#include<iostream>
using namespace std;
void merge(int a[],int low,int mid,int high){
  int len1=mid-low+1;
  int len2=high-mid;
  int c[len1];
  int d[len2];
  for(int i=0;i<len1;i++){
    c[i]=a[low+i];
  }
   for(int i=0;i<len2;i++){
    d[i]=a[mid+1+i];
  }
  int i=0,j=0,main=low;
  while(i<len1&&j<len2){
    if(c[i]>=d[j]){
      a[main]=d[j];
      j++;
    }
    else{
      a[main]=c[i];
      i++;
    }
    main++;
  }
  while(i<len1){
    a[main++]=c[i++];
  }
   while(j<len2){
    a[main++]=d[j++];
  }


}
void mergesort(int a[],int low,int high){
      if(low>=high){
        return;
      }
      int mid=low+(high-low)/2;
      mergesort(a,low,mid);  
      mergesort(a,mid+1,high);
      merge(a,low,mid,high);
}
int main(){
   int a[]={6,4,6,4,2,6,3,9};
   mergesort(a,0,7);
   for(int i=0;i<8;i++){
     cout<<" "<<a[i];}

}