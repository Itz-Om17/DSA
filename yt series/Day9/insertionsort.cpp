#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &A, int n) {
    for (int i = 1; i < n; i++) {
        int curr = A[i];
        int prev = i - 1;

        // Shift elements that are greater than curr
        while (prev >= 0 && A[prev] > curr) {
            A[prev + 1] = A[prev];
            prev--;
        }
        // Insert current element at its correct position
        A[prev + 1] = curr;
    }
}


int main() {
    vector<int> vec = {4,1,5,2,3};
    // vector<int> vec = {1,2,3,4,5};
    int n = vec.size();
    insertionSort(vec,n);
    return 0;
}