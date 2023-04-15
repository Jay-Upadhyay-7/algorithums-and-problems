// An edge in an undirected connected graph is a bridge if removing it disconnects the graph. For a disconnected undirected graph, definition is similar, a bridge is an edge removing which increases number of disconnected components.
//DIS VECTOR STORES THE DISCOVERY TIME OF EVERY VERTICE
//LOW STORES THE MINIMUM DESCOVERY PATH , IF THERE IS A BACKEDGE I.E EDGE TO VISITED COMPONENT WHICH IS NOT ITS PARENT THEN LOW IS UPDATED AS MIN(LOW[NODE],DIS[ADJ]) ADJ MEANS ADJACENT VERTEX
//ON COMING BACK FROM A DFS CALL LOW IS UPADTED TOO
//THERE IS A BRIDDGE IF AND ONLY IF  low[NEIGHBOUR]>dis[node]
#include<bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> ans;
    void bridge( unordered_map<int,vector<int>> &g,vector<int> &dis,vector<int> &low,int node,int parent,vector<int> &vis,int count){

        vis[node]=true;
        for(auto i: g[node]){
            if(i==parent){
                continue;
            }
            if(!vis[i]){
                dis[i]=low[i]=count++;
                bridge(g,dis,low,i,node,vis,count);
                low[node]=min(low[node],low[i]);
                if(low[i]>dis[node]){
                    //bridge h
                    vector<int> temp;
                    temp.push_back(node);
                    temp.push_back(i);
                    ans.push_back(temp);
                }
            }
            else{
                low[node]=min(low[node],low[i]);
            }
        }
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& c) {
        unordered_map<int,vector<int>> g(n);
        for(auto i : c){
          g[i[0]].push_back(i[1]);
          g[i[1]].push_back(i[0]);
        }
        vector<int> vis(n,0);
        vector<int> dis(n,-1);
        vector<int> low(n,-1);
        dis[0]=0;
        low[0]=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                bridge(g,dis,low,i,-1,vis,1);
            }
        }
        return ans;
    }
};
