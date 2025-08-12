#include <iostream>
#include <vector>
#include<algorithm>
#include <string>
using namespace std;

string revWord(string s){
    string ans="";
    int st=0,end=s.length()-1;
    while(st<=end ){
        swap(s[st],s[end]);
        st++;
        end--;
    }
    for(int i=0;i<s.length();i++){
        string word="";
        while(i<s.length() && s[i]!= ' '){
            word+=s[i];
            i++;
        }
        reverse(word.begin(),word.end());
        if(word.length()>0){
            ans+=" " + word;
        }
    }
    return ans.substr(1);
}

int main() {
    string s = "Hello   World";
    cout<<revWord(s);
    return 0;
}