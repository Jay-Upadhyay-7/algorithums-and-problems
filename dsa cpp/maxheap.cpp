#include<iostream>
using namespace std;
int insert(int a[],int item,int n){
    if(n==50){
      cout<<"heap full";
      return n;
    }
    if(n==0){
      a[++n]=item;
      return n;
    }
    else{
      int k=n+1;
      a[++n]=item;
      while(a[k]>a[(k-1)/2]){
        swap(a[k],a[(k-1)/2]);
        k=(k-1)/2;
      }
    }
    return n;
}
void checkheaf(int a[],int i,int n){
    int left=i*2+1;
    int right=i*2+2;
    if(left>n||(a[left]<=a[i]&&a[right]<=a[i])){
      return;
    }
    if(a[left]>a[i]){
      swap(a[i++],a[left]);
      checkheaf(a,i,n);
    }
    else if(a[right]>a[i]){
      swap(a[i++],a[right]);
      checkheaf(a,i,n);
    }
    // else if(a[left]<=a[i]&&a[right]<=a[i]){
    //   checkheaf(a,i+1,n);
    // }
}
int deletekey(int a[],int n,int key,int i){
  if(i>n){
    cout<<"key not found\n";
    return n;
  }
  else if(i==n&&a[i]==key){
    return n-1;
  }
  else if(a[i]==key){
        swap(a[i],a[n--]);
        checkheaf(a,i,n);
        return n;
  }
   n=deletekey(a,n,key,i+1);
   return n;
}
void displaymaxheap(int a[],int n){
  for(int i=0;i<=n;i++){
    cout<<a[i]<<endl;
  }
}
int main(){
   int a[50];
   int n=-1;
   n=insert(a,8,n);
   n=insert(a,5,n);
   n=insert(a,6,n);
   n=insert(a,8,n);
   n=insert(a,4,n);
   n=insert(a,3,n);
   n=insert(a,136,n);
   n=insert(a,183,n);
   n=insert(a,113,n);
   n=insert(a,213,n);
   displaymaxheap(a,n);
   cout<<"\nafter deletion"<<endl;
   n=deletekey(a,n,13,0);
   displaymaxheap(a,n);
   cout<<"\nafter deletion"<<endl;
   n=deletekey(a,n,8,0);
   displaymaxheap(a,n);
   cout<<"\nafter deletion"<<endl;
   n=deletekey(a,n,8,0);
   displaymaxheap(a,n);
}
