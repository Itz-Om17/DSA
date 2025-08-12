#include <iostream>
using namespace std;

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {4, 5, 6, 5},
        {7, 8, 9, 6},
        {1, 1, 1, 7}
    };
    int rows = 4, cols = 4;    
    int primDiagSum = 0, secDiagSum = 0;

    if (rows == cols) {
        // Primary diagonal: (0,0), (1,1), (2,2), (3,3)
        for (int i = 0; i < rows; i++) {
            primDiagSum += matrix[i][i];
        }

        // Secondary diagonal: (0,3), (1,2), (2,1), (3,0)
        for (int i = 0; i < rows; i++) {
            secDiagSum += matrix[i][cols - 1 - i];
        }

        cout << "The Primary Diagonal sum is " << primDiagSum << endl;
        cout << "The Secondary Diagonal sum is " << secDiagSum << endl;

        if (primDiagSum == secDiagSum) {
            cout << "Both diagonal sums are equal: " << primDiagSum << endl;
        } else if (primDiagSum > secDiagSum) {
            cout << "The primary diagonal sum is greater: " << primDiagSum << endl;
        } else {
            cout << "The secondary diagonal sum is greater: " << secDiagSum << endl;
        }
    } else {
        cout << "The rows and columns are not the same" << endl;
    }

    return 0;
}
