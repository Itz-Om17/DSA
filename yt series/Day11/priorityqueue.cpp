//imagine it like a stack but the number which will be greatest will be given the highest priority ans it will be the stack top element
#include <iostream>
#include<vector>
#include <queue>
using namespace std;

int main() {
    // priority_queue<int> q;
    priority_queue<int,vector<int>,greater<int>> q; //this is used to reverse the order for e.g the order is 30 20 10 then it will be like this 10 20 30
    q.push(10);
    q.push(20);
    q.push(30);
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<" ";
    return 0;
}