#include <iostream>
#include <climits>
using namespace std;
int main(){
    int size;
    cout << "Enter size of Array: ";
    cin >> size;
    int arr[size];
    int max = arr[0]; //also max = INT_MIN;
    for(int i = 0; i<= size-1; i++){
        cin >> arr[i];
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout << "Maximum element: "<<max;
    return 0;
}