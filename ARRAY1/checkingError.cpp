#include <iostream>
using namespace std;
int main(){
    int size;
    cin >> size;
    int arr[size];
    for( i = 1; i<= size; i++){ // Error: i is not declared
        cin >> arr[i];
        cout << arr[i] << " ";
    }
    return 0;
}