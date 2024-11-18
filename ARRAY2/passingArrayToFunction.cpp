#include <iostream>
using namespace std;
void display(int arr[], int size){ //int* arr, is also correct
    for(int i = 0; i<=size-1; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
void change(int b[] , int size){ 
    b[0] = 100; 
    return; 
}
int main(){
    int arr[] = {1,4,2,7,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    //accessing the elemetns of array in another funciton
    //updation, pass by value OR reference?
    //here in arrays we pass by reference in array &arr and arr both refers to address of first element of array
    display(arr, size); 
    change(arr,size);
    display(arr,size);
}