#include<iostream>
#include<climits>
using namespace std;


int target_idx(int arr[], int size, int target){
    for(int i=0;i<size;i++){
        if(target==arr[i]){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {4,2,7,8,1,2,5};
    int target = 8;
    int size = 7;
    int index = target_idx(arr,size,target);
    (index==-1)?cout<<"element not present"<<endl:cout<<"element found at index "<<index<<endl;
    return 0;
}