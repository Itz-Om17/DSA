#include <iostream>
#include <vector>
using namespace std;

void selectionsort(vector<int> vec,int n){ //O(n^2)
    for(int val: vec){
        cout<<val<<" ";
    }
    cout<<"\n";
    for(int i=0;i<n-1;i++){
        int smallestidx = i;
        for(int j=i+1;j<n;j++){
            if(vec[smallestidx]>vec[j]){
                smallestidx = j;
            }
        }
        swap(vec[i],vec[smallestidx]);
    }
    for(int val: vec){
        cout<<val<<" ";
    }}

int main() {
    vector<int> vec = {4,1,5,2,3};
    // vector<int> vec = {1,2,3,4,5};
    int n = vec.size();
    selectionsort(vec,n);
    return 0;
}