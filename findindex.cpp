#include<iostream>
using namespace std;
int main(){
  int n;
  int temp=0;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      for(int k=j+1;k<n;k++){
        if(a[i]+a[j]==a[k]){
          cout<<i<<" "<<j<<" "<<k<<endl;
          temp=1;
        }
      }
    }
  }
  if(temp==0){
    cout<<"No sequence find";
  }
}