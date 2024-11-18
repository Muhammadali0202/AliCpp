#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,4,2,7,4};
    int* ptr = arr; // giving address
    // cout << ptr << endl;
    for(int i = 0; i<5; i++){ 
        cout << i[ptr] << " ";
    }
    ptr = arr; // ptr is pointing to the first element of array
    cout << endl;
    *ptr = 8 ; // ptr[0] = 8;
    ptr++; // ptr = ptr + 4; ptr is pointing to the 2nd element of array
    *ptr = 9; // ptr[1] = 9;
    ptr--; // ptr is pointing to the 1st element of array
    for(int i = 0; i<5; i++){ 
        cout << *ptr << " ";
        ptr++; // ptr = ptr + 4;
    }
    ptr = arr;
}