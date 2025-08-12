#include <iostream>
#include<vector>
using namespace std;


int linear_search(vector<int>& vec,int target){
    int count =-1;
    for(int val: vec){
        count++;
        if(val == target){
            return count;
        }
    }
    return -1;
}


int main(){
    vector<int> vec = {4,2,7,8,1,2,5};
    int target = 8;
    int size = vec.size();
    int ans = linear_search(vec,target);
    cout<<"the value is present at this index: "<<ans<<endl;
    return 0;
}