#include <iostream>
#include <vector>
#include<map>
using namespace std;

int main() {
    map<string,int> m;
    m["bat"] = 5;
    m["ball"] = 10;
    m["footabll"] = 15;
    m["laptops"] = 7;
    m["keyboards"] = 9;
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}