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
        reverse(rs.begin(),rs.end());
    }
