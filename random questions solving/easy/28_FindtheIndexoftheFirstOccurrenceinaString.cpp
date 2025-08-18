// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

 

// Example 1:

// Input: haystack = "sadbutsad", needle = "sad"
// Output: 0
// Explanation: "sad" occurs at index 0 and 6.
// The first occurrence is at index 0, so we return 0.
// Example 2:

// Input: haystack = "leetcode", needle = "leeto"
// Output: -1
// Explanation: "leeto" did not occur in "leetcode", so we return -1.

class Solution {
public:
    int strStr(string s, string s1) {
        int j=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==s1[j]){
                j++;
                if(j==s1.length()){
                    return i-s1.length()+1;
                }
            }else{
                i=i-j;
                j=0;
            }
        }
        return -1;
    }
};