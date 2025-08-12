//brute force approach O(n^2) without space complexity O(1)
// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> prodofvec(vector<int>& nums) {
//     vector<int> vec;
//     for(int i=0;i<nums.size();i++){
//         int prod=1;
//         for(int j=0;j<nums.size();j++){
//             if(i!=j){
//                 prod*=nums[j];
//             }
//         }
//         // prod/=nums[i]; //no allowed to do division operation
//         vec.push_back(prod);
//     }
//     return vec;
// }

// int main() {
//     vector<int>vec={1,2,3,4};
//     vector<int> ans = prodofvec(vec);
//     for(int val: ans){
//         cout<<val<<" ";
//     } 
//     return 0;
// }



//optimal approach without SC O(1)  extra=>O(n)+O(n)+O(n)=>O(3n)=O(n)
// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> prodofvec(vector<int>& nums) {
//     int n = nums.size();
//     vector<int> vec(n,1);
//     vector<int> prefix(n,1);
//     vector<int> suffix(n,1);
//     for(int i=1;i<n;i++){
//         prefix[i]= prefix[i-1]*nums[i-1];
//     }
//     for(int i=n-2;i>-1;i--){
//         suffix[i]=suffix[i+1]*nums[i+1];
//     }

//     for(int i=0;i<n;i++){
//         vec[i] = prefix[i]*suffix[i];
//     }
//     return vec;
// }

// int main() {
//     vector<int>vec={1,2,3,4};
//     vector<int> ans = prodofvec(vec);
//     for(int val: ans){
//         cout<<val<<" ";
//     } 
//     return 0;
// }


//optimal approach with SC O(1) extra=>O(n)+O(n)=>O(2n)=O(n)
#include <iostream>
#include <vector>
using namespace std;

vector<int> prodofvec(vector<int>& nums) {
    int n = nums.size();
    vector<int> vec(n,1);
    int prefix=1;
    vector<int> suffix(n,1);
    for(int i=1;i<n;i++){
        vec[i]= vec[i-1]*nums[i-1];
    }
    int sufix=1;
    for(int i=n-2;i>-1;i--){
        sufix*=nums[i+1];
        vec[i] *=sufix;
    }
    return vec;
}

int main() {
    vector<int>vec={1,2,3,4};
    vector<int> ans = prodofvec(vec);
    for(int val: ans){
        cout<<val<<" ";
    } 
    return 0;
}