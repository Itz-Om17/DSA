// Given two binary strings a and b, return their sum as a binary string.

 

// Example 1:

// Input: a = "11", b = "1"
// Output: "100"
// Example 2:

// Input: a = "1010", b = "1011"
// Output: "10101"

class Solution {
public:
    string addBinary(string a, string b) {
        if(a=="0" && b=="0") return "0";
        int carry=0;
        string bin="";
        int i=a.length()-1,j=b.length()-1;
        while(i>-1 || j>-1|| carry){
            int sum=carry;
            if(i>=0){
                sum=sum+a[i]-'0';
                i--;
            }
            if(j>=0){
                sum=sum+b[j]-'0';
                j--;
            }
            carry=sum/2;
            bin.push_back((sum % 2) + '0');
            }
        reverse(bin.begin(),bin.end());
        return bin;
        }
};