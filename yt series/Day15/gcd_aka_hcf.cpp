//brute force approach 
// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// int main() {
//     int a=0,b=0;
//     cout<<"Enter the no. a: ";
//     cin>>a;
//     cout<<"Enter the no. b: ";
//     cin>>b;
//     int gcd = 0;
//     if(a==0 && b==0){ 
//     gcd=0;
//     }else if(b==0){ 
//     gcd =a;
//     }else if(a==0){ 
//     gcd=b;
//     } else{
//             for(int i=1;i<min(a,b);i++){
//                 if(a%i==0 && b%i==0){
//                     gcd = i;
//                 }
//             }
//         }
//     cout<<"The gcd for the given number is:"<<gcd<<endl;   
//     return 0;
// }

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
    int gcd = 0;
    while(a!=0 && b!=0){
        if(a>b) a=a%b;
        else b=b%a;
        if(a==0) gcd=b;
        else gcd=a;
    }
    //recursive approach //incorrect code
    // while(true){
    //     if(b==0){
    //         gcd =a; 
    //         break;}else {
    //             b = b%a;
    //         }
    //     }
        cout<<gcd<<endl;
    return 0;
}