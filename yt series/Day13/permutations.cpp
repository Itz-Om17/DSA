#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isFreqSame(int freq[], int winFreq[]){
    for(int i=0;i<26;i++){
        if(freq[i]!=winFreq[i]) return false;
    }
    return true;
}

bool isPermu(string s1, string s2){
    int freq[26] = {0};
    for(int i=0;i<s1.length();i++){
        freq[s1[i]-'a']++; //value of 'a' is 97 and it will be like this 
        //suppose if the value at s[i] is b then it will go like 'b'-'a'=> 98-97=1 
        //1index will be checked and at that index only the value will be incremented
    }
    int winSize = s1.length(); //this taken so that we can check for only tha much window
    for(int i=0;i<s2.length();i++){ //checking on each and every index of the s2
        int winIdx=0,idx=i; //initializing the value of winIdx to 0 and idx to i
        int winFreq[26] = {0}; //initializing 26char int array for checking the windowd
        while(winIdx< winSize && idx<s2.length()){ //windIdx is checked with winSize 
            // because everytime the elements length upto the window should be only checked
            //idx is cheked so that when we traverse the loop till the end of s2
            winFreq[s2[idx] - 'a']++; //this is used to index at which val should be incremented just like lineno.16
            idx++;
            winIdx++; //this is inc because we r keeping the track for winsize
        }
        if(isFreqSame(freq,winFreq)){
            return true;
        }
    }    
    return false;
}

int main() {
    string s1 = "ab";
    string s2 = "eidaoboo";
    cout<<isPermu(s1,s2)<<endl;
    return 0;
}