// Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

// A mapping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

 

// Example 1:

// Input: digits = "23"
// Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

// Example 2:

// Input: digits = ""
// Output: []

// Example 3:

// Input: digits = "2"
// Output: ["a","b","c"]

 

// Constraints:

//     0 <= digits.length <= 4
//     digits[i] is a digit in the range ['2', '9']
//link of problem:https://github.com/Jay-Upadhyay-7/algorithums-and-problems/new/main/recursion%20problems
class Solution {
    
    private:
    void solve(string digits,string output,int index,vector<string> &ans,string mapp[]){
        if(index>=digits.size()){
            ans.push_back(output);
            return;
        }
        int number=digits[index]-'0';
        string val=mapp[number];
        for(int i=0;i<val.length();i++){
            output.push_back(val[i]);
            solve(digits,output,index+1,ans,mapp);
            output.pop_back();
        }
    }
    public:
    vector<string> letterCombinations(string digits) {
    vector<string> ans;
    string output;
    if(digits.length()==0){
        return ans;
    }
    int index=0;
    string mapp[10]={"", "", "abc", "def", "ghi", "jkl","mno","pqrs","tuv","wxyz"};
    solve(digits,output,index,ans,mapp);  
    return ans;
    }
};
