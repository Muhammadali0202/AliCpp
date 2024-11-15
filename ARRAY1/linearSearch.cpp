#include <iostream>
using namespace std;
int main(){
    int size;
    cout << "Enter size of Array: ";
    cin >> size;
    int arr[size];
    for(int i = 0; i<= size-1;i++){
        cin >> arr[i];
    }
    int x;
    cout << "Enter the element to be searched: ";
    cin >> x;
    bool flag = false;
    for(int i = 0; i<= size-1; i++){
         if(arr[i] == x){
            flag = true;
        }
    }
    if(flag == true){
        cout << "Element found";
    }
    else{
        cout << "Element not found";
    }
    return 0;
}