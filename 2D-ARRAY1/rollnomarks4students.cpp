#include <iostream>
#include <vector>
using namespace std;
int main(){
    //roll number and marks of 4 students
    int arr[4][2];
    for(int i = 0; i<4; i++){
        for(int j = 0; j<2;j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i<4; i++){
        for(int j = 0; j<2;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}