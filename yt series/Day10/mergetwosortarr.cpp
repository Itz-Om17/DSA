
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> A = {1, 2, 3, 0, 0, 0};    
    vector<int> B = {2, 5, 6};

    int m = 3; // number of valid elements in A
    int n = 3; // number of valid elements in B

    int i = m - 1;       // last valid element in A
    int j = n - 1;       // last element in B
    int idx = m + n - 1; // end of merged array

    while(i >= 0 && j >= 0){
        if(A[i] > B[j]){
            A[idx] = A[i];
            i--;
        } else {
            A[idx] = B[j];
            j--;
        }
        idx--;
    }

    // Copy any remaining elements from B
    while(j >= 0){
        A[idx] = B[j];
        j--;
        idx--;
    }

    for(int val : A){
        cout << val << " ";
    }

    return 0;
}
