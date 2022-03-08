//find total occurence of an element using binary search
#include<iostream>
using namespace std;
int binarysearch(int a[],int low,int high,int key,int count){
    if(low>high){
     return count ;}
     int mid=low+(high-low)/2;
     if(a[mid]==key){
       count++;
       count=binarysearch(a,low,mid-1,key,count);
       count=binarysearch(a,mid+1,high,key,count);}
     else if(a[mid]>key){
          count=binarysearch(a,low,mid-1,key,count);}
     else{
          count=binarysearch(a,mid+1,high,key,count);}
}
int main()
{ 
    int m;
    cout<<"enter total no of test cases\n";
    cin>>m;
    for(int j=0;j<m;j++){
    int n;
    cout<<"enter total no of element in array\n";
    cin>>n;
    cout<<"enter array\n";
    int a[n];
    for(int i=0;i<n;i++){
       cin>>a[i];
    }
    int key;
    cout<<"enter key to search:\n";
    cin>>key;
    int count=binarysearch(a,0,n-1,key,0);
    cout<<"total occurence : "<<count;
    }
    return 0;
}
