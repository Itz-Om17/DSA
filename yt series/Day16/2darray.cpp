#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int matrix[4][3];
    int rows =4, cols =3;
    int n=1;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            matrix[i][j] = n;
            n++; 
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    int num =0;
    cout<<"Enter the key you want to search: ";
    cin>>num;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(matrix[i][j]==num){
                cout<<matrix[i][j]<<" is found at index of row no."<<i+1<<" and column no."<<cols+1;
                break;
            }
        }
        cout<<"\n";
    }
    if(matrix[3][2]!=num){
        cout<<"Key not found"<<endl;
    }
    return 0;
}