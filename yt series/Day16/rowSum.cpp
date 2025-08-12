#include <iostream>
#include <vector>
#include <string>
using namespace std;

int maxSum(int mat[][3], int rows, int cols){
    int sum=0;
    for(int i=0;i<rows;i++){
        int currSum=0;
        for(int j=0;j<cols;j++){
            currSum+=mat[i][j];
        }
        currSum>sum ? sum=currSum: currSum;
    }
    return sum;
}

int main() {
    int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{1,1,1}};
    int rows =4, cols =3;
    cout<<"The maximum sum of the row is "<<maxSum(matrix,rows,cols)<<endl;
    return 0;
}