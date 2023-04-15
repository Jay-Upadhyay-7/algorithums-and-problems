// A vertex in an undirected connected graph is an articulation point (or cut vertex) if removing it (and edges through it) disconnects the graph. Articulation points represent vulnerabilities in a connected network – single points whose failure would split the network into 2 or more components. They are useful for designing reliable networks. For a disconnected undirected graph, an articulation point is a vertex removal which increases the number of connected components.
//discovery,low,visited vector is used and timer to assign discovery and low
//if not visited then dfs is called and on returning low is updated
//articulas point if low[nbr]>=dis[node]&&parent!=-1
//if visited then it is backedge so update low low[node]=min(low[node],dis[nbr])
//if parent is -1 i.e source vertex then check if it as more then 1 child then it is A.P
#include<bits/stdc++.h>
using namespace std;
void dfs(unordered_map<int,vector<int>> &g,int node,vector<int> &visited,vector<int> &low,vector<int> &dis,int &timer,int parent){
     visited[node]=true;
     dis[node]=low[node]=timer++;
     int child=0;
     for(auto i:g[node]){
      if(i==parent) continue;
      if(!visited[i]){
        dfs(g,i,visited,low,dis,timer,node);
        low[node]=min(low[node],low[i]);
        //check for ap
        if(low[i]>=dis[node]&&parent!=-1){
          cout<<"\nArticulus point"<<"vertex: "<<node;
        }
        child++;
      }
      else{
        low[node]=min(low[node],dis[i]);
      }
     }
     if(parent==-1&&child>1) cout<<"\nArticulus point"<<"vertex: "<<node;
}

int main(){
   int v;
   int e;
   cin>>v>>e;
   unordered_map<int,vector<int>> g;
   for(int i=0;i<e;i++){
    int uu,vv;
    cin>>uu>>vv;
    g[uu].push_back(vv);
    g[vv].push_back(uu);
   }
   vector<int> visited(v,0);
   vector<int> low(v,-1);
   vector<int> dis(v,-1);
   int timer=0;
   for(int i=0;i<v;i++){
    if(!visited[i]){
      dfs(g,i,visited,low,dis,timer,-1);
    }
   }
}

