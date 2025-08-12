//binary search works on only sorted arrays and it has a TC of O(logn)
// #include <iostream>
// #include <vector>
// using namespace std;
// int binarysearch(vector<int> &nums,int target){
//     int start = 0;
//     int end = nums.size()-1;
//     while(start<=end){
//         int mid = start + (end-start)/(2);
//         if(nums[mid]<target){
//             start =mid+1;
//         }
//         else if(nums[mid]>target){
//             end = mid-1;
//         }
//         if(nums[mid]==target){
//             return mid;
//         }
//     }
//     return -1;
// }
// int main() {
//     vector<int> vec ={-1,0,3,4,5,9,12};
//     cout<<"the index on which the target is "<<binarysearch(vec,12)<<endl;
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;
int binarysearch(vector<int> &nums,int target,int start,int end){
    if(start<=end){
        int mid = start + (end-start)/(2);
        if(nums[mid]<target){
            return binarysearch(nums,target,mid+1,end);            
        }
        else if(nums[mid]>target){
            return binarysearch(nums,target,start,mid-1);
        }
        if(nums[mid]==target){
            return mid;
        }
    }
    return -1;
}
int main() {
    vector<int> vec ={-1,0,3,4,5,9,12};
    cout<<"the index on which the target is "<<binarysearch(vec,12,0,vec.size()-1)<<endl;
    return 0;
}