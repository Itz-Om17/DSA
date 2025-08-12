//brute force approach linear search TC O(n)
// #include <iostream>
// #include <vector>
// using namespace std;
// int singlelee_sortarray(vector<int>& nums){
//     for(int i=1;i<nums.size();i++){
//         if(nums[i]!=nums[i-1] && nums[i]!=nums[i+1]){
//             return i;
//         }
//     }
//     return -1;
// }
// int main() {
//     vector<int> vec = {1,1,2,3,3,4,4,8,8};
//     cout<<singlelee_sortarray(vec)<<endl;
//     return 0;
// }
// optimal approach TC O(logn)
#include <iostream>
#include <vector>
using namespace std;
int singlelee_sortarray(vector<int>& A){
int n = A.size();

        if (n == 1)
            return A[0];

        int st = 0, end = n - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (mid == 0 && A[0] != A[1])
                return A[0];

            if (mid == n - 1 && A[n - 1] != A[n - 2])
                return A[n - 1];

            if (A[mid - 1] != A[mid] && A[mid] != A[mid + 1])
                return A[mid];

            if (mid % 2 == 0) { // even
                if (A[mid - 1] == A[mid]) { // left
                    end = mid - 1;
                } else { // right
                    st = mid + 1;
                }
            } else { // odd
                if (A[mid - 1] == A[mid]) { // right
                    st = mid + 1;
                } else { // left
                    end = mid - 1;
                }
            }
        }
        return -1;

}
int main() {
    // vector<int> vec = {1,1,2,3,3,4,4,8,8};
    vector<int> vec = {3,3,7,7,10,11,11};
    cout<<singlelee_sortarray(vec)<<endl;
    return 0;
}