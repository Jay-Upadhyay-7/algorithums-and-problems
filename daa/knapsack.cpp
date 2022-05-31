#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(pair<double,double>&p,pair<double,double>&p2){
  return p.second>p2.second;}

int main(){
  int n,k,profit=0;
  cin>>n>>k;
  vector<pair<double,double> > p(n);
  for(int i=0;i<n;i++){
      cin>>p[i].first;//give weight
      cin>>p[i].second;//contain value
}
  for(int i=0;i<n;i++){
    p[i].second=p[i].second/p[i].first;}
    sort(p.begin(),p.end(),cmp);
  for(int i=0;i<n;i++){
      if(k>0&&p[i].first>0){ 

         if(k>=p[i].first){
               profit+=p[i].first*p[i].second;
               
               k-=p[i].first;
               p[i].first=0;
                          }
        else{  
          p[i].first-=k;
          profit+=p[i].second*k;
          k=0;}
   }
   if(k==0){
         break;}
}
cout<<profit<<'\n';
}
