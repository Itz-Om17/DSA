#include <iostream>
#include <vector>
using namespace std;
//undefined behaviour case the intial size of vec is 0 and we are trying to assign the value at index which doesnot exist .. so do it lik this we need to use vec.push_back f^n
int main() {
    vector<int> vec = {1,2,3,4};
    // cout<<vec.size()<<endl;
    // vec.push_back(10);
    // vec.push_back(1);
    // vec.push_back(1000);
    // vec.push_back(100);
    // vec.push_back(200);
    // vec.emplace_back(2); //same as push_back but difference is underhood working
    // vec.pop_back(); //removes element from last
    // vec.at(2); //returns the value at the given index
    // vec[2]; //returns the value at the given index
    // vec.front(); //first element
    // vec.back(); //last element
    // cout<<vec.size()<<endl;
    // cout<<vec.capacity()<<endl;
    cout<<*(vec.begin())<<endl;
    vector<int>::iterator itr;
    for(itr =vec.begin();itr!=vec.end();itr++){
        cout<<*(itr)<<" ";
    }    
    for(auto itr =vec.rbegin();itr!=vec.rend();itr++){ //auto is used to automate this thing vector<int>::reverse_iterator itr;
        cout<<*(itr)<<" ";
    }    
    
    cout<<"\n";
    return 0;
}