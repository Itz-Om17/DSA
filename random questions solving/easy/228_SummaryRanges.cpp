// You are given a sorted unique integer array nums.

// A range [a,b] is the set of all integers from a to b (inclusive).

// Return the smallest sorted list of ranges that cover all the numbers in the array exactly. That is, each element of nums is covered by exactly one of the ranges, and there is no integer x such that x is in one of the ranges but not in nums.

// Each range [a,b] in the list should be output as:

// "a->b" if a != b
// "a" if a == b
 

// Example 1:

// Input: nums = [0,1,2,4,5,7]
// Output: ["0->2","4->5","7"]
// Explanation: The ranges are:
// [0,2] --> "0->2"
// [4,5] --> "4->5"
// [7,7] --> "7"
// Example 2:

// Input: nums = [0,2,3,4,6,8,9]
// Output: ["0","2->4","6","8->9"]
// Explanation: The ranges are:
// [0,0] --> "0"
// [2,4] --> "2->4"
// [6,6] --> "6"
// [8,9] --> "8->9"



class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> vec;
        if(nums.size()==1){
            vec.push_back(to_string(nums[0]));
            return vec;
        }
        int i=0;
        int rangeSt=0;
        int rangeEnd=0;
        while(i<nums.size()){
            int j=i+1;
            int tempCounter=nums[i];
            rangeSt=nums[i];
            while(j<=nums.size()){
                if(j!=nums.size() && tempCounter+1==nums[j]){
                    tempCounter++;
                    j++;
                }else{
                    rangeEnd = nums[j-1];
                    if(rangeSt==rangeEnd){
                        vec.push_back(to_string(rangeSt));
                    }else{
                    string st = to_string(rangeSt);
                    st+="->";
                    st+=to_string(rangeEnd);
                    vec.push_back(st);
                    }
                    break;
                }
            }
        
                i=j;

        }
        return vec;
    }
};