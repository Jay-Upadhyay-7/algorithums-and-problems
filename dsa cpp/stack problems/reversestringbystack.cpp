#include<iostream>
#include<stack>
using namespace std;
int main(){
  string a="afgagaga";
  stack<char> s;
  for(int i=0;i<a.length();i++){
    char temp=str[i];
    s.push(temp);}
  string ans="";
  while(!s.empty()){
    char ch=s.top();
    ans.push_back(ch);
    s.pop();}
  cout<<"answer: "<<ans<<endl;
  return 0;} 
    
