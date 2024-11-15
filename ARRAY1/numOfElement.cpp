#include <iostream>
#include <climits>
using namespace std;
int main(){
    int size;
    cout << "Enter size of Array: ";
    cin >> size;
    int arr[size];
    for(int i = 0; i<= size-1;i++){
        cin >> arr[i];
    }
    cout << "Number of elements: "<<size;
    return 0;
} 