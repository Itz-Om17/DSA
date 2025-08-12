#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isArmstrong(int n){
    int sum=0;int dupN = n;
    while(dupN!=0){
        int rem = dupN%10;
        sum+=rem*rem*rem;
        dupN = dupN/10;
    }
    cout<<sum<<endl;
    return sum==n;
}

int main() {
    int n=0;
    cout<<"Enter the no: ";
    cin>>n;
    if(isArmstrong(n)){ 
        cout<<"The number is an armstong number"<<endl;
    }else {
        cout<<"The number is not an armstrong number"<<endl;
    }
    return 0;
}