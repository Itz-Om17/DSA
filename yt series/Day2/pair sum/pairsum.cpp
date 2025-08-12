// brute force approach for sorted array  O(n^2)

// #include <iostream>
// #include<vector>
// using namespace std;

// vector<int> pairssum(vector<int>nums,int target){
//     vector<int> vec;
//     for(int i=0;i<nums.size();i++){
//         for(int j=i+1;j<nums.size();j++){
//             if(nums[i]+nums[j]==target){
//                  vec.push_back(i);
//                  vec.push_back(j);
//                  return vec;
//             }
//         }
//     }
//     return vec;
// }
// int main() {
//     vector<int> nums = {2,7,11,15};
//     int target=9;
//     vector<int>ans = pairssum(nums,target);
//         cout<<"the index are "<<ans[0]<<","<<ans[1]<<endl;
//     return 0;
// }



//optimal approach for sorted array O(n)
#include <iostream>
#include<vector>
using namespace std;
vector<int> pairssum(vector<int>nums,int target){
    vector<int> vec;
    int i=0,j=(nums.size())-1;
    while(i<j){
        int sum=nums[i]+nums[j];
        if(sum>target){
            j--;
        }
        else if(sum<target){
            i++;
        }
        else{
            vec.push_back(i);
            vec.push_back(j);
            return vec;
        }
    }
    return vec;
}
int main() {
    vector<int> nums = {2,7,11,15};
    int target=26;
    vector<int>ans = pairssum(nums,target);
        cout<<"the index are "<<ans[0]<<","<<ans[1]<<endl;
    return 0;
}

