#include<iostream>
using namespace std;

int main(){
    int arr1[] = {1,2,2,3,4,5};
    int arr2[] = {2,3,3,7,8,9};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    for(int i=0;i<size1;i++){
        bool isCommon = false;
        int count = 0;
        for(int j=0;j<size2;j++){
            if(arr1[i]==arr2[j]){
                count++;
                isCommon = true;
            }
        }
        bool isalreadyprinted = false;
        for(int k=0;k<i;k++){
            if(arr1[i]==arr1[k]){
                isalreadyprinted=true;
            }
        }
        if(isCommon && !isalreadyprinted){
            cout<<arr1[i]<<" ";
        }

    }
}