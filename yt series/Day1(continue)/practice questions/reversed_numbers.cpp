#include <iostream>
#include<vector>
using namespace std;

void reversenumeber_vector(vector<int>& vec){
    int start = 0;
    int end = (vec.size())-1;
    while(start<end){
        swap(vec[start],vec[end]);
        start++;
        end--;
    } 

}

int main(){
    vector<int> vec = {4,2,1,7,8,1,2,5};
    cout<<"before swapping: "<<endl;
    for(int val: vec){
        cout<<val<<" ";
    }
    reversenumeber_vector(vec);
    cout<<"\nafter swapping: "<<endl;
    for(int val: vec){
        cout<<val<<" ";
    }
    return 0;
}