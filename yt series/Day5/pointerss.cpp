#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a;
    cout<<a<<" "<<&a<<" "<<ptr<<" "<<&ptr<<endl;    

    int** ptr2 = &ptr; //pointer to pointer
    cout<<ptr2<<endl; //ptr2 stores the address of ptr1
    cout<<*(&a)<<endl; //derefernce operator
    cout<<*(ptr)<<endl; //this will also print the same val as above but the thing here is that it will go like this 
    // ptr is pointer=> it will give the value it has and it has the address of a (as its value) and then the dereference opt will look 
    // the value at the address
    int* ptr3 = NULL;
    cout<<(ptr3)<<endl; //0 is the op
    cout<<*ptr3<<endl; //no error but we can resolve this location value
    int arr[] = {1, 2, 3, 4, 5};

    cout << *arr << endl;       // 1
    cout << *(arr + 1) << endl; // 2
    cout << *(arr + 2) << endl; // 3
    cout << *(arr + 3) << endl; // 4    
    return 0;
}