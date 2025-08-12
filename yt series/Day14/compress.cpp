#include <iostream>
#include <vector>
#include <string>
using namespace std;

int compress(vector<char>& chars){
    int idx=0;
    for(int i=0;i<chars.size();i++){
        char ch= chars[i];
        int count=0;
        while(i<chars.size() && chars[i]==ch){
            count++;
            i++;
        }
        if(count==1){
            chars[idx]= ch;
            idx++;
        }else{
            chars[idx]=ch;
            idx++;
            string str = to_string(count);
            for(int j=0;j<str.length();j++){
                chars[idx]=str[j];
                idx++;
            }
        } 
        i--;
    }
    chars.resize(idx);
    return chars.size();
}

int main() {
    vector<char> chars = {'a','a','b','b','c','c','c'};    
    cout<<compress(chars)<<endl;
    return 0;
}