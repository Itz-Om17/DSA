#include <iostream>
#include <cstring> // for strlen
#include<string>
#include <vector>
using namespace std;

int main() {
    // char str[100]; //refer to line no.14 //also constant in size
    char str[] = "apnacollege"; 

    // cout<<"Enter an character array: ";
    // cin>>str;

    // cout<<"Base on your input char array the length of the string is "<<strlen(str)<<endl;    
    // cin.getline(str,100,'$'); //'$' this type of delimiter is used to simply inout the line even if the user hit enter

    // cin.getline(str,12); //if i enter the string with less index then mentioned size then i will contain garbage value

    // for(char ch: str){
        // cout<<ch<<" ";
    // }
    // cout<<str;

    int len=0;
    for(int i=0;i<str[i]!=0;i++){
        len++;
    }
    cout<<len<<endl;

    return 0;
}