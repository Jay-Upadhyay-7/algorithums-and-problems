#include<iostream>
#include<vector>
using namespace std;
bool dfs(vector<int> g[],vector<bool> &visited,int u,int v){
    visited[u]=true;
    for(auto j=g[u].begin();j!=g[u].end();j++){
        if(u==v){
          cout<<"path found ";
          return true;}
        if(!visited[*j]){
           dfs(g,visited,*j,v);}
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
  int j,k;
  cin>>j>>k;
  bool m=dfs(g,visited,j,k);
  if(m==false){
    cout<<"path not found ";
  }
  }
           
           

