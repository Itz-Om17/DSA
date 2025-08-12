#include <iostream>
#include <vector>
#include <string>
#include<cctype>
using namespace std;

string removeOccurrence(string &str,string part){
    int pos= str.find(part);
    if(pos < str.length()){
        str.erase(pos,part.length());
    }
    else{
        return str;
    }
    return removeOccurrence(str,part);
}

int main() {
    string str = "daabcbaabcbc";
    string part = "abc";
    cout<<removeOccurrence(str,part)<<endl;
    return 0;
}