#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> vec = {1,2,3};
    vec.push_back(4);
    for(int val: vec){
        cout<<val<<endl;
    }
    vec.pop_back();
    for(int val: vec){
        cout<<val<<endl;
    }
    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    return 0;
}
