#include <iostream>
#include <vector>
#include <string>
#include<cctype>
using namespace std;

bool isPalindrome(string str){
    int st =0,end=str.length()-1;
    while(st<=end){
        if(!(isalnum(str[st]))) st++;
        if(!(isalnum(str[end]))) end--;
        if(tolower(str[st])==tolower(str[end])){
            st++;
            end--;
        }
        else{
            return false;
        }
    }    
    return true;
}

int main() {
    string str = "raceCAR";
    cout<<isPalindrome(str)<<endl;
    return 0;
}