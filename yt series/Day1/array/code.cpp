#include<iostream>
#include<climits>
using namespace std;

int main(){
    int numbers[] = {5,15,22,1,-15,24};
    int n = (sizeof(numbers)/sizeof(int));
    int smallest[2] = {INT_MAX};
    int largest[2] = {INT_MIN};
    for(int i=0;i<n;i++){
            if(smallest[1]>numbers[i]){
                smallest[1]=numbers[i];
                smallest[2]=i;
            }
            // smallest[1] = min(numbers[i],smallest);
            if(largest[1]<numbers[i]){
                largest[1] = numbers[i];
                largest[2]=i;
            }
    }
    cout<<smallest[1]<<" at index "<<smallest[2]<<endl;
    cout<<largest[1]<<" at index "<<largest[2]<<endl;
    return 0;
}