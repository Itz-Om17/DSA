//time complexity is O(logn)


#include <iostream>
using namespace std;

double myPow(double x, int n) {
        long binform = n;
        double ans=1;
        if(binform<0){
            x=(1/x);
            binform=-binform;
        }
        while(binform>0){
            if(binform%2==1){
                ans*=x;
            }
            x=x*x;
            binform/=2;
        }
        return ans;
    }

int main() {
    cout<<myPow(2,10)<<endl;
    return 0;
}