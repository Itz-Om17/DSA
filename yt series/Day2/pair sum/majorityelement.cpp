// brute force O(n^2)
// #include <iostream>
// #include<vector>
// using namespace std;

// vector<int> majorityele(vector<int>nums){
//     vector<int> vec;
//     int size = nums.size();
//     for(int i=0;i<size;i++){
//         int freq=0;
//         for(int j=i+1;j<size;j++){
//             if(nums[j]==nums[i]){
//                 freq++;
//             }
//             if(freq>=int(size/2)){
//                 freq++;
//                 vec.push_back(nums[j]);
//                 vec.push_back(freq);
//                 return vec;
//             }
//         }
        
//     }
//     return vec;
// }

// int main(){

//     vector<int> vec={2,2,1,1,1};
//     vector<int> ans = majorityele(vec);
//     cout<<"the most repeating element is "<<ans[0]<<" and the frequency is "<<ans[1]<<endl;

//     return 0;
// }



// optimized approach having O(nlogn+n)
// first sort and then check freq


// #include <iostream>
// #include<vector>
// #include <algorithm>
// using namespace std;

// int majorityele(vector<int>nums){
//     vector<int> vec;
//     sort(nums.begin(),nums.end());
//     int freq=1;
//     int ans=nums[0];
//     for(int i=1;i<nums.size();i++){
//         if(nums[i]==nums[i-1]){
//             freq++;
//         }
//         else{
//             freq=1;
//             ans = nums[i];
//         }
//         if(freq>int(vec.size()/2)){
//             vec.push_back(ans);
//             vec.push_back(freq);
//             return ans;
//         }
//     }
//     return ans;
// }

// int main(){

//     vector<int> vec={2,2,1,1,1};
//     int ans = majorityele(vec);
//     cout<<"the most repeating element is "<<ans<<endl;

//     return 0;
// }



#include <iostream>
#include<vector>
using namespace std;

int majorityele(vector<int>nums){
    int size = nums.size();
    int freq=0,ans;
    for(int i=0;i<size;i++){
        if(freq==0){
            ans = nums[i];
        }
        if(nums[i]==ans){
            freq++;
        }
        else{
            freq--;
        }
    }
    //to ensure if the given array doesnt contain the repetition of element
    int count=0;
        for(int val: nums){
            if(val==ans){
                count++;
            }
        }
        if(count>size/2){
            return ans;
        }
        else{
            return -1;
        }
    return -1;
}
int main(){

    vector<int> vec={1,2,2,1,1};
    int ans = majorityele(vec);
    cout<<"the most repeating element is "<<ans<<endl;

    return 0;
}
