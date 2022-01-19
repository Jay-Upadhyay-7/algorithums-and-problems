#include <iostream>
using namespace std;
void heapify(int a[], int n, int i)
{ 
  int largest=i;
  int left = i * 2;
  int right = i * 2 + 1;
  if (left <= n && a[left] > a[largest])
  {
    largest=left;
  }
  if (right <= n && a[right] > a[largest])
  {
    largest=right;
  }
  if(largest!=i){
    swap(a[i], a[largest]);
    heapify(a,n,largest);
  }
}
void insert(int a[], int &n, int item)
{
  a[++n] = item;
  for (int i = n/2 ; i > 0; i--)
  {
    heapify(a,n,i);
  }
}
void deletevalue(int a[],int &n){
    swap(a[n--],a[1]);
    for (int i = n / 2; i > 0; i--){
      heapify(a, n,i);
  }
}
void heapsort(int a[],int n){
    for(int i=n;i>1;i--){
      swap(a[1],a[i]);
      heapify(a,i-1,1);
    }
}
void display(int a[],int n){
  for(int i=1;i<=n;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}
int main()
{
  int a[50];
  int n = 0;
  insert(a, n, 7);
  insert(a, n, 9);
  insert(a, n, 12);
  insert(a, n, 6);
  insert(a, n, 5);
  insert(a, n, 3);
  insert(a, n, 89);
  cout<<"heap : ";
  display(a,n);
  cout<<"heap after deletion: ";
  deletevalue(a,n);
  display(a,n);
  cout<<"heap after sorting: ";
  heapsort(a,n);
  display(a,n);
  
}
