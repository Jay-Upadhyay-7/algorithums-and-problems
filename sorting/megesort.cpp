#include<iostream>
using namespace std;
void merge(int a[],int s,int e){
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *first=new int[len1];
    int *second=new int[len2];
    int n=s;
    for(int i=0;i<len1;i++){
      first[i]=a[n++];
    }
    n=mid+1;
    for(int i=0;i<len2;i++){
      second[i]=a[n++];
    }
     //merge 2 sorted arrays     
    int index1 = 0;
    int index2 = 0;
    n = s;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            a[n++] = first[index1++];
        }
        else{
            a[n++] = second[index2++];
        }
    }   

    while(index1 < len1) {
        a[n++] = first[index1++];
    }

    while(index2 < len2 ) {
        a[n++] = second[index2++];
    }

    delete []first;
    delete []second;


}
void mergesort(int a[],int start,int end){
  if(start>=end){
    return;
  }
  int mid=(start+end)/2;
  mergesort(a,start,mid);
  mergesort(a,mid+1,end);

  merge(a,start,end);
}

int main(){
  int a[]={1,4,3,2,9,5};
  mergesort(a,0,5);
  for(int i=0;i<5;i++){
    cout<<a[i]<<" ";
  }
}