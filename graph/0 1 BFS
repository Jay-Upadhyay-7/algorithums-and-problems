#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//complexity E+V
//used when distance weight are either zero or one

int main(){
  int edges,vertices;
  cin>>vertices;
  cin>>edges;
  unordered_map<int,vector<pair<int,int> > > g(vertices);
  for(int i=0;i<edges;i++){
    int u,v,w;
    cin>>u>>v>>w;
    g[u].push_back({v,w});
    g[v].push_back({u,w});
  }
  vector<int> dist(vertices,INT_MAX);
  dist[0]=0;
  // you can also use disjoint set
  deque<pair<int,int>> pq;
  pq.push_front({0,0});
  while(!pq.empty()){
    pair<int,int> temp= pq.front();
    pq.pop_front();
    for(int i=0;i<g[temp.second].size();i++){
           pair<int,int> p=g[temp.second][i];
           if(temp.first+p.second < dist[p.first]){
            dist[p.first]=temp.first+p.second;
            if(p.second==0)
            pq.push_front({temp.first+p.second,p.first});
            else if(p.second==1)
            pq.push_back({temp.first+p.second,p.first});
           }
    }
  }
  cout<<"minimum ditsance to ease vertices from sourcxe :" ;
  for(int i=0;i<vertices;i++){
    cout<<dist[i]<<" ";
}
}
