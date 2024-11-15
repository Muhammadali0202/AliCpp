#include <iostream>
#include <climits>
using namespace std;
int main(){
    int size;
    cout << "Enter size of Array: ";
    cin >> size;
    int arr[size];
    int min = INT_MAX; //also min = INT_MIN;
    for(int i = 0; i<= size-1; i++){
        cin >> arr[i];
        if(min > arr[i]){
            min = arr[i];
        }
    }
    cout << "minimum element: "<<min;
    return 0;
}