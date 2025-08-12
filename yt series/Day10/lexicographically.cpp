//TC O(n) & SC O(1)
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
    // vector<int> vec = {1,2,5,4,3};
    vector<int> vec = {5,4,3,2,1};
    int n = vec.size();
    int piv=-1;
    for(int i=n-2;i>=0;i--){
        if(vec[i]<vec[i+1]){
            piv = i;
            break;
        }

    }
    if(piv==-1){ //or else we can use reverse array function with two ptrs one is begining and second is ending
        // int st=0;
        // int end=n-1;
        // while(st<=end){
        //     swap(vec[st],vec[end]);
        //     st++;
        //     end--;
        // }
        reverse(vec.begin(),vec.end());
        // return; //this is for inplace changes  imp step
    }
    // cout<<vec[piv];
    for(int i=n-1;i>=piv;i--){
        if(vec[i]>vec[piv]){
            swap(vec[i],vec[piv]);
            break;
        }
    }
    //next lager element
    int pivahead = piv+1;
    int last = n-1;
    while(pivahead<=last){
        swap(vec[pivahead],vec[last]);
        pivahead++;
        last--;
    }
    for(int val: vec){
        cout<<val<<" ";
    }
    return 0;
}