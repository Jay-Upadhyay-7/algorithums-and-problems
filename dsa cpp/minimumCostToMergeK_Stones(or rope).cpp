#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Solution {
public:
    int mergeStones(vector<int>& stones, int k) {
        priority_queue<int,vector<int>,greater<int>>q(stones.begin(),stones.begin()+stones.size());
        long long int mincost=0;
        while(q.size()>=k){
          mincost=0;
            for(int i=0;i<k;i++){
                mincost=mincost+q.top();
                q.pop();
            }
            cout<<"\n";
        q.push(mincost);
        }
        if(q.size()==1){
        return q.top();}
        else{
            return -1;
        }
    }
};
int main(){
  vector<int> a;
  a.push_back(3);
  a.push_back(2);
  a.push_back(4);
  a.push_back(1);
  a.push_back(12);
  Solution o;
  int mincost=o.mergeStones(a,2);
  cout<<mincost;
}
