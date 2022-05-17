#include<iostream>
#include<vector>
using namespace std;
void dfs(vector<int> g[],vector<bool> &visited,int i){
    cout<<" "<<i;
    visited[i]=true;
    for(auto j=g[i].begin();j!=g[i].end();j++){
        if(!visited[*j]){
           dfs(g,visited,*j);}
           }
 }
int main(){
  int v,e;
  cin>>v>>e;
  vector<int> g[v];
  vector<bool> visited;
  visited.assign(v,false);
  int a,b;
  for(int i=0;i<e;i++){
     cin>>a>>b;
     g[a].push_back(b);
     g[b].push_back(a);
     }
  for(int i=0;i<v;i++){
        if(!visited[i]){
           dfs(g,visited,i);}
           }
           }

