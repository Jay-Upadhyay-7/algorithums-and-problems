#include<bits/stdc++.h>
using namespace std;
void duplicates(int arr[],int n){
    unordered_map<int,int> freq;
    for(int i=0;i<n;i++){
      freq[arr[i]]++;}
    bool flag = false;
    unordered_map<int, int>:: iterator it;
    for (it=freq.begin(); it!=freq.end(); it++)
    {
        if (it->second > 1)
        {
            cout << it->first << " ";
            flag = true;
        }
    }
    if (flag == false)
        cout << "-1"; 
    }
 
 



int main(){
  int arr[] = {2, 1, 40, 12, 15, 6, 5, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    duplicates(arr, n);
    return 0;
}