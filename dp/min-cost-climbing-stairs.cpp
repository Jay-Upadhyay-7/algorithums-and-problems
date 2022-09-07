class Solution {
public:
    //memoriasation
    // int costs(vector<int>& cost,vector<int> &V,int n){
    //     if(n==0){
    //         return cost[0];
    //     }
    //     if(n==1){
    //         return cost[1];
    //     }
    //     if(V[n]!=-1){
    //         return V[n];}
    //     V[n]=cost[n]+min(costs(cost,V,n-1),costs(cost,V,n-2));
    //     return V[n];
    // }
    // int minCostClimbingStairs(vector<int>& cost) {
    //     int n=cost.size();
    //     vector<int> v(n+1,-1);
    //     return min(costs(cost,v,n-1),costs(cost,v,n-2)); 
    // }
    //tabulation
//     int costs(vector<int>& cost,int n){
//        vector<int> v(n+1);
//         v[0]=cost[0];
//         v[1]=cost[1];
//         for(int i=2;i<n;i++){
//             v[i]=cost[i]+min(v[i-1],v[i-2]);
//         }
        
//         return min(v[n-1],v[n-2]);
//     }
    //memorisation
     int costs(vector<int>& cost,int n){
        int x=cost[0];
        int y=cost[1];
        for(int i=2;i<n;i++){
            int temp=x;
            x=y;
            y=cost[i]+min(temp,y);    
            
        }
        
        return min(x,y);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
       
        return costs(cost,n); 
    }
};
