#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool searchcolMatrix(vector<vector<int>>& matrix, int target,int row){
    int n = matrix[0].size();
    int st=0,end=n-1;
    while(st<=end){
        int mid = st + (end-st)/2;
        if(matrix[row][mid]==target) return true;
        if(matrix[row][mid]<target) st=mid+1;
        else end=mid-1;
    }
    return false;
}

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();
    int stRow =0;
    int eRow = m-1;
    while(stRow<=eRow){
        int mid = stRow + (eRow-stRow)/2 ;
        if(matrix[mid][0]<=target && matrix[mid][n-1]>=target){
            //
            return searchcolMatrix(matrix,target,mid);

        }else if(target>matrix[mid][n-1]){
            stRow=mid+1;
        }else{
            eRow = mid-1;
        }
    }
    return false;   
}

int main() {
    vector<vector<int>> matrix= {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    if(searchMatrix(matrix,34)){
        cout<<"element found"<<endl;
    }else{
        cout<<"Not found"<<endl;
    }
    return 0;
}