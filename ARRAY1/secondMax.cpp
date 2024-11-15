#include <iostream>
#include <climits>
using namespace std;
int main(){
    int size;
    cout << "Enter size of Array: ";
    cin >> size;
    int arr[size];
    int max = INT_MIN; //also max = INT_MIN;
    for(int i = 0; i<= size-1; i++){
        cin >> arr[i];
        
    }
    for(int j = 0; j<= size-1; j++){
        if(max < arr[j]){
            max = arr[j];
        }
    }
    cout << "Maximum element: "<<max<<endl;
    int smax = INT_MIN;
    for( int k = 0; k<= size-1; k++){
        if(smax < arr[k] && arr[k] != max){
        smax = arr[k];
    }
    } 
    cout << "Second Maximum element: "<<smax;
    return 0;
}