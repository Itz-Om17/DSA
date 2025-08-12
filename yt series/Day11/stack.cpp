#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    stack<int> s2;
    s2.swap(s);

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }    
    return 0;
}