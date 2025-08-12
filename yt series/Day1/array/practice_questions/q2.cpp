#include<iostream>
#include<climits>
using namespace std;

int main() {
    int numbers[] = {1, 2, 63, 54, 88};
    int n = sizeof(numbers) / sizeof(int);

    int smallestVal = INT_MAX, smallestIdx = -1;
    int largestVal = INT_MIN, largestIdx = -1;

    for (int i = 0; i < n; i++) {
        if (numbers[i] < smallestVal) {
            smallestVal = numbers[i];
            smallestIdx = i;
        }
        if (numbers[i] > largestVal) {
            largestVal = numbers[i];
            largestIdx = i;
        }
    }

    swap(numbers[smallestIdx], numbers[largestIdx]);

    cout << "Smallest: " << smallestVal << " at index " << smallestIdx << endl;
    cout << "Largest: " << largestVal << " at index " << largestIdx << endl;

    cout << "Array after swap:" << endl;
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
