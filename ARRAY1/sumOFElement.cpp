#include <iostream>
using namespace std;
int main(){
    int size;
    cin >> size;
    int arr[size];
    int sum = 0;
    for(int i = 0; i<=size-1;i++){
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << "Sum of elements: "<<sum;
    return 0;
}