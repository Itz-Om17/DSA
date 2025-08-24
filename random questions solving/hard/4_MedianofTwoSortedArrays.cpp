// Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

// The overall run time complexity should be O(log (m+n)).

 

// Example 1:

// Input: nums1 = [1,3], nums2 = [2]
// Output: 2.00000
// Explanation: merged array = [1,2,3] and median is 2.
// Example 2:

// Input: nums1 = [1,2], nums2 = [3,4]
// Output: 2.50000
// Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m= 0;
        int n= 0;
        vector<int> vec;
        while(m<nums1.size() && n<nums2.size()){
            if(nums1[m]<nums2[n]){
                vec.push_back(nums1[m]);
                m++;
            }else{
                vec.push_back(nums2[n]);
                n++;
            }
        }
        while(m<nums1.size()){
            vec.push_back(nums1[m]);
            m++;
        }
        while(n<nums2.size()){
            vec.push_back(nums2[n]);
            n++;
        }
        int median = vec.size()/2;
        if(vec.size()%2!=0){
            return vec[median];
        }else{
            return (vec[median-1]+vec[median])/2.0;
        }
        return 0;
    }
};