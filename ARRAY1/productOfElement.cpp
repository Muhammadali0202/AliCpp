#include <iostream>
using namespace std;
int main(){
    int size;
    cout << "Enter size of Array: ";
    cin >> size;
    int arr[size];
    int product = 1;
    for(int i= 0; i<=size-1;i++){
        cin >> arr[i];
        product = product*arr[i];
    }
    cout << product;
    return 0;
}