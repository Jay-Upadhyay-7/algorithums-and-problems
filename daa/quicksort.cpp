#include<bits/stdc++.h>
using namespace std;
int findpivot(vector<int> &v,int low,int high){
  int pivot=v[low];
  int cnt=0;
  for(int i=low+1;i<=high;i++){
    if(pivot>=v[i]){
      cnt++;
    }
  }
  int pivotindex=low+cnt;
  swap(v[low],v[pivotindex]);
  int i=low,j=high;
  while(i<pivotindex&&j>pivotindex){
    while(v[i]<=pivot){
      i++;
    }
    while(v[j]>pivot){
      j--;
    }
    if(i<pivotindex&&j>pivotindex){
      swap(v[i++],v[j--]);
    }
  }
  return pivotindex;  

}
void quicksort(vector<int> &v,int low,int high){
  if(low>=high){
    return;
  }
  int pivot=findpivot(v,low,high);
  quicksort(v,low,pivot-1);
  quicksort(v,pivot+1,high);

}
int main(){
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++){
     cin>>v[i];
  }
  quicksort(v,0,n-1);
  for(int i=0;i<n;i++){
     cout<<v[i]<<" ";
  }
}