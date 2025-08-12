#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int a=0,b=0;
    cout<<"Enter the no. a: ";
    cin>>a;
    cout<<"Enter the no. b: ";
    cin>>b;
    int aDup=a,bDup=b;
    int gcd = 0;
    while(a!=0 && b!=0){
        if(a>b) a=a%b;
        else b=b%a;
        if(a==0) gcd=b;
        else gcd=a;
    }
    int lcm = (aDup*bDup)/gcd;
    cout<<lcm<<endl;
    return 0;
}
