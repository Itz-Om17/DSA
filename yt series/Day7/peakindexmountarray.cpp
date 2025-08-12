// brute force approach TC O(n) linear search next bin search
// #include <iostream>
// #include <vector>
// using namespace std;

// int peak_index(vector<int>& nums){
//     for(int i=1;i<nums.size();i++){
//         if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
//             return i;
//         }
//     }
//     return -1;
// }
// int main() {
//     vector<int> vec = {0,3,8,9,5,2};
//     cout<<peak_index(vec)<<endl;
//     return 0;
// }

//optimal aprroach binary search logic used TC O(logn)
#include <iostream>
#include <vector>
using namespace std;

int peak_index(vector<int>& nums){
    int st=1,end=nums.size()-2;
    while(st<=end){
        int mid= st +(end-st)/2;
        if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
            return mid;
        }
        if(nums[mid]>nums[mid-1] ){
            st = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}
int main() {
    vector<int> vec = {0,3,8,9,5,2};
    cout<<peak_index(vec)<<endl;
    return 0;
}