#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
 int min=a[0],max=a[0];
 for(int i=1;i<n;i++){
   if(a[i]<min){
     min=a[i];
   }
  if(a[i]>max){
     max=a[i];
   }
 }
 //size of array storing count max-min+1
 //index=value-min
 int range =max-min+1;
 int count[range];
 //initialising all elements with 0
 for(int i=0;i<range;i++){
   count[i]=0;
 }
for(int i=0;i<n;i++){
  //position of value = value - min 
   count[a[i]-min]++;
 }
for(int i=1;i<range;i++){
   count[i]=count[i]+count[i-1];
 }
int output[n];
for(int i=0;i<n;i++){
  output[count[a[i] - min] - 1] = a[i];
        count[a[i] - min]--;
 }
for (int i = 0; i < n; i++){
        a[i] = output[i];
}
for (int i = 0; i < n; i++){
        cout<<" " <<a[i] ;
}

}






