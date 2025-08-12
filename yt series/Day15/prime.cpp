//normal approach
// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// bool isPrime(int n){
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0) return false;
//     }
//     return true;
// }

// int main() {
//     int n;
//     cout<<"Enter the number to check: ";
//     cin>>n;
//     if(isPrime(n)){
//         cout<<"It is a prime number"<<endl;
//     }else{
//         cout<<"It is not a prime number"<<endl;
//     }
//     return 0;
// }


//sieve of erastosthenses
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int isPrimeRange(int n){
    int count=0;
    vector<bool> isPrime(n+1,true);
    for(int i=2;i<n;i++){
        if(isPrime[i]){
            count++;
            for(int j= i*2;j<n;j=j+i){
                isPrime[j]= false;
            }
        }
    }
    return count;
}

int main() {
    int n;
    cout<<"Enter the range of number to check: ";
    cin>>n;
    cout<<"the count for the range from 0 to "<<n<<" is "<<isPrimeRange(n)<<endl; 
    return 0;
}