// 3. Longest Substring Without Repeating Characters
// Medium

// Given a string s, find the length of the longest substring without repeating characters.

 

// Example 1:

// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3.

// Example 2:

// Input: s = "bbbbb"
// Output: 1
// Explanation: The answer is "b", with the length of 1.

// Example 3:

// Input: s = "pwwkew"
// Output: 3
// Explanation: The answer is "wke", with the length of 3.
// Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

 

// Constraints:

//     0 <= s.length <= 5 * 104
//     s consists of English letters, digits, symbols and spaces.

link of problrem: https://leetcode.com/problems/longest-substring-without-repeating-characters/

code: 
class Solution {
private:
    void solve(string s,int &height){
        int index=0;
        int start=0;
        height=0;
        int tempheight=0;
        
        int temp[128];
        for(int i=0;i<128;i++){
            temp[i]=0;
        }
        while(index<s.length()){
            if(temp[s[index]]==0){
                temp[s[index]]=1;
                tempheight++;
            }
            else{
                height=max(height,tempheight);
                for(int i=start;i<index;i++){
                temp[s[i]]=0;}
                start++;
                index=start;
                tempheight=0;
                continue;
            }
            index++;
        }
        height=max(height,tempheight);
    }
public:
    int lengthOfLongestSubstring(string s) {
        if(s==" "||s.length()==1){
            return 1;
        }
        int answer;
        solve(s,answer);
        return answer;
    }
};

