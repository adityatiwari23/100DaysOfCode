// 3. Longest Substring Without Repeating Characters
// Medium

// 29728

// 1263

// Add to List

// Share
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

// 0 <= s.length <= 5 * 104
// s consists of English letters, digits, symbols and spaces.

//Sol ---------------

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // if(s == " "){
        //     return 1;
        // }
        int ans = 0;
        int count = 0;
        unordered_set<char> st;
        
        for(int i=0; i<s.size(); i++){
            if(st.find(s[i]) != st.end()){
                st.clear();
                //ans = max(count, ans);
                count = 1;
                st.insert(s[i]);
            }
            else{
                count++;
                st.insert(s[i]);
                // if whole string would be distinct then else will not runnn..
                ans = max(count, ans);
            }
        }
        return ans;
    }
};