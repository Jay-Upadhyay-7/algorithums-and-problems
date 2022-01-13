// Given an integer array nums of unique elements, return all possible subsets (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.

 

// Example 1:

// Input: nums = [1,2,3]
// Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
// Example 2:

// Input: nums = [0]
// Output: [[],[0]]
//problem: leetcode

class Solution {
public:
    void solve(vector<int> nums,vector<int> output,vector<vector<int>> &ans,int index){
        if(index>=nums.size()){
            ans.push_back(output);
            return;
        }
        //excluding element
        solve(nums,output,ans,index+1);
        //including element
        output.push_back(nums[index]);
        solve(nums,output,ans,index+1);
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> t;
        int index=0;
        solve(nums,t,ans,index);
        return ans;
    }
};
