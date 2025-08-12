#include <iostream>
#include <vector>
using namespace std;

void bubblesort(vector<int> vec,int n){ //O(n^2)
    for(int val: vec){
        cout<<val<<" ";
    }
    cout<<"\n";
    for(int i=0;i<n-1;i++){ //O(1*n)
        bool isSwap = false;
        for(int j=0;j<n-i-1;j++){  //O(n*n)
            if(vec[j]>vec[j+1]){
                isSwap =true;
                swap(vec[j],vec[j+1]);
            }
        }
        if(!isSwap){
            return;
        }
    }
    for(int val: vec){
        cout<<val<<" ";
    }}

int main() {
    // vector<int> vec = {4,1,5,2,3};
    vector<int> vec = {1,2,3,4,5};
    int n = vec.size();
    bubblesort(vec,n);
    return 0;
}