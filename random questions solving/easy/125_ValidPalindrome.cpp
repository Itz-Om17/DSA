// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.

 

// Example 1:

// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.
// Example 2:

// Input: s = "race a car"
// Output: false
// Explanation: "raceacar" is not a palindrome.
// Example 3:

// Input: s = " "
// Output: true
// Explanation: s is an empty string "" after removing non-alphanumeric characters.
// Since an empty string reads the same forward and backward, it is a palindrome.

class Solution {
public:
    bool isPalindrome(string str) {
        int st =0,end=str.size()-1;
        if(str==" ") return true;
        while(st<=end){
            if(!(isalnum(str[st]))) {
                st++;
                continue;
            }
            if(!(isalnum(str[end]))) {
                end--;
                continue;
                }
            if(tolower(str[st])==tolower(str[end])){
                st++;
                end--;
            }
            else{
                return false;
            }
        }    
        return true;
    }
};


