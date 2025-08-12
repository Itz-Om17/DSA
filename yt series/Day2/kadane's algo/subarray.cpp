// brute force approach for showing the subarray as well as its sum


// #include <iostream>
// #include<vector>
// using namespace std;
// int main() {
//     int arr[] = {1,2,3,4,5};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int max=arr[0];
//     for(int start=0;start<size;start++){
//         for(int end=start;end<size;end++){
//             int sum=0;
//             for(int i=start;i<=end;i++){
//                 cout<<arr[i];
//                 sum+=arr[i];
//             }
//             if(max<sum){
//                 max=sum;
//             }
//             cout<<" sum is "<<sum;
//             cout<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"the maximum sum is: "<<max<<endl;
//     return 0;
// }



// brute force approach for pnly calculating the sum of the particular subarray
// #include <iostream>
// #include<vector>
// using namespace std;
// int main() {
//     int arr[] = {1,2,3,4,5};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int max_sum=arr[0];
//     for(int start=0;start<size;start++){
//         int curr_sum=0;
//         for(int end=start;end<size;end++){
//             curr_sum+=arr[end];
//             if(max_sum<curr_sum){
//                 max_sum=curr_sum;
//             }
//         }
//         }
//         cout<<max_sum;
//     return 0;
// }


// using kadane's algo

#include <iostream>
#include<vector>
using namespace std;
int main() {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max_sum=arr[0];
    int curr_sum=0;
    for(int i=0;i<size;i++){
        curr_sum+=arr[i];
        max_sum=max(curr_sum,max_sum);
        if(curr_sum<0){
            curr_sum=0;
        }
    }
    cout<<max_sum;
    return 0;
}