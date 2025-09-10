// Given an m x n matrix, return all elements of the matrix in spiral order.

 

// Example 1:


// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [1,2,3,6,9,8,7,4,5]
// Example 2:


// Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
// Output: [1,2,3,4,8,12,11,10,9,5,6,7]
 

// Constraints:

// m == matrix.length
// n == matrix[i].length
// 1 <= m, n <= 10
// -100 <= matrix[i][j] <= 100

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> vec;
        int strow = 0;  
        int stcol = 0;                       
        int endrow = matrix.size() - 1;      
        int endcol = matrix[0].size() - 1;
        while (strow <= endrow && stcol <= endcol) {
            for (int j = stcol; j <= endcol; j++) {
                vec.push_back(matrix[strow][j]);
            }
            for (int k = strow + 1; k <= endrow; k++) {
                vec.push_back(matrix[k][endcol]);
            }
            if (strow < endrow) {
                for (int l = endcol - 1; l >= stcol; l--) {
                    vec.push_back(matrix[endrow][l]);
                }
            }
            if (stcol < endcol) {
                for (int i = endrow - 1; i > strow; i--) {
                    vec.push_back(matrix[i][stcol]);
                }
            }
            strow++;
            stcol++;
            endrow--;
            endcol--;
        }
        return vec;
    }
};
