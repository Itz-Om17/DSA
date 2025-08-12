#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,2,3,4,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        int count = 0;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }

        // bool isalreadyprinted = false;
        // for(int k=0;k<i;k++){
        //     if(arr[i]==arr[k]){
        //         isalreadyprinted=true;
        //     }
        // }

        if(count==1){
            cout<<arr[i]<<" ";
        }
    }

}












