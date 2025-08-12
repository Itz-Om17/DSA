#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string str = "hello";
    int st =0,end=str.length()-1;
    while(st<=end){
        swap(str[st],str[end]);
        st++;
        end--;
    }    
    cout<<str<<endl;
    return 0;
}