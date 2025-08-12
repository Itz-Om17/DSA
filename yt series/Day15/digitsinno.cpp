#include <iostream>
#include <vector>
#include <string>
#include<cmath>
using namespace std;

int main() {
    int n=0;
    cout<<"Enter the number: ";
    cin>>n;
    //the shortcut to count the no.of digits is
    cout<<(int)(log10(n)+1)<<endl;
    int count=0,sum=0,prod=1;
    int reversedNo = 0;
    while(n!=0){
        count++;
        int rem = n%10;
        sum+=rem;
        reversedNo= reversedNo*10+rem;
        prod*=rem;
        cout<<rem<<" ";
        n=n/10;    
    }
    cout<<"The count of the numbers is "<<count<<endl;
    cout<<"The sum of the number is "<<sum<<endl;
    cout<<"The product of the number is "<<prod<<endl;
    cout<<"The reversed number is "<<reversedNo<<endl;
    return 0;
}