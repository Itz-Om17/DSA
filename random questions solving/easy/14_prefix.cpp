// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

 

// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.
 
class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string pre="";
        string s1 = s[0];
        int i=0;
        while(i<s1.length()){
            for(int j=1;j<s.size();j++){
                if(s1[i]!=s[j][i]){
                    return pre;
                }
            }
            pre+=s1[i];
            i++;
        }
        return pre;
    }
};