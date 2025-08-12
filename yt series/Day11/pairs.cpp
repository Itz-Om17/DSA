#include <iostream>
#include<vector>
using namespace std;

int main() {
    pair<int,pair<char,int>> p = {3,{'m',17}}; //char should be assingned in 'quotes'
    cout << p.first<<endl;
    cout << p.second.first<<endl;
    cout<<p.second.second<<endl;
    vector<pair<int, int>> vec = {{1, 2}, {3, 4}, {5, 6}}; // sample data
    vec.push_back({4, 5});         // Creates a pair and then inserts it
    vec.emplace_back(4, 5);        // Constructs pair directly in-place
    for (pair<int, int> p : vec) {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}