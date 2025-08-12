#include<iostream>
using namespace std;

int main(){
    int sum=0;
    int prod =1;
    int arr[] = {1,2,3,4,5};
    for(int i=0;i<(sizeof(arr)/sizeof(int));i++){
        sum+=arr[i];
        prod*=arr[i];
    }
    cout<<"sum is "<<sum<<"\n"<<"prodcut is "<<prod<<endl;
    return 0;
}