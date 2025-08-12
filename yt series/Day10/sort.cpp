//brute force approach just by using the sort fn TC O(nlogn)  for 10opts it will take 33opts
// #include <iostream>
// #include <vector>
// #include<algorithm>
// using namespace std;

// int main() {
//     vector<int> vec = {2,0,2,1,1,0,1,2,0,0};    
//     for(int val : vec){
//         cout<<val<<" ";
//     }
//     cout<<"\n";
//     sort(vec.begin(),vec.end());
//     for(int val : vec){
//         cout<<val<<" ";
//     }
//     return 0;
// }


// //brute force approach just by using the sort fn TC O(nlogn)  for 10opts it will take 33opts
// #include <iostream>
// #include <vector>
// #include<algorithm>
// using namespace std;

// int main() {
//     vector<int> vec = {2,0,2,1,1,0,1,2,0,0};    
//     for(int val : vec){
//         cout<<val<<" ";
//     }
//     cout<<"\n";
//     sort(vec.begin(),vec.end());
//     for(int val : vec){
//         cout<<val<<" ";
//     }
//     return 0;
// }


//optimal approach just by using the sort fn TC O(n)
// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     vector<int> vec = {2,0,2,1,1,0,1,2,0,0};    
//     int zeros=0,ones=0,twos=0;
//     for(int val : vec){
//         cout<<val<<" ";
//         if(val==0) zeros++;
//         else if(val==1) ones++;
//         else twos++;
//     }
//     cout<<"\n";
//     cout<<zeros<<" "<<ones<<" "<<twos<<endl;
//     // sort(vec.begin(),vec.end());
//     for(int i=0;i<vec.size();i++){
//         if(zeros>0) {
//             zeros--;
//             vec[i]=0; 
//         }
//         else if(ones>0) {
//             ones--;
//             vec[i]=1;
//         }
//         else {
//             twos--;
//             vec[i] =2;
//         }
//     }
//     for(int val : vec){
//         cout<<val<<" ";
//     }
//     return 0;
// }

//optimized approach 
//DNF(dutch nationa flag algo) TC O(n) single pass(one single loop with 3ptrs mid high,low)
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {2,0,2,1,1,0,1,2,0,0};    
    // vector<int> vec = {2,0,2,1,1,0};    
    int n=vec.size();
    int mid=0,high=n-1,low=0;
    while(mid<=high){
        if(vec[mid]==0){
            swap(vec[mid],vec[low]);
            low++;
            mid++;
        }else if(vec[mid]==1){
            mid++;
        }
        else{
            swap(vec[mid],vec[high]);
            high--;
        }

    }    
    for(int val : vec){
        cout<<val<<" ";
    }    
    return 0;
}


