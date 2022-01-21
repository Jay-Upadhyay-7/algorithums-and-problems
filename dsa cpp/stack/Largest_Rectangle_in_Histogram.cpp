//question - Largest Rectangle in Histogram
class Solution {
public:
    void findMinInLeft(vector<int> heights,vector<int> &ls){
        stack<int> s;
        for(int i=0;i<heights.size();i++){
          while(!s.empty()&&heights[s.top()]>=heights[i]){
            s.pop();  
            }
         if(s.empty()){
            ls.push_back(-1);
        } 
        else{
            ls.push_back(s.top());
        }
        s.push(i);}
    }
        void findMinInRight(vector<int> heights,vector<int> &rs){
        stack<int> s;
        for(int i = heights.size()-1;i>=0;i--){
         
        while(!s.empty()&&heights[s.top()]>=heights[i]){
            s.pop();  
            }
         if(s.empty()){
            rs.push_back(heights.size());
        } 
        else{
            rs.push_back(s.top());
        }
        s.push(i);}
    }
    int largestRectangleArea(vector<int>& heights) {
        vector<int> ls;
        vector<int> rs;
        int maxHeight=0;
        findMinInLeft(heights,ls);
        findMinInRight(heights,rs);
        reverse(rs.begin(),rs.end());
        for(int i=0;i<heights.size();i++){
            int thisheight=(rs[i]-ls[i]-1)*heights[i];
            cout<<thisheight<<" ";
            maxHeight=max(thisheight,maxHeight); }
        return maxHeight;
    }
};
