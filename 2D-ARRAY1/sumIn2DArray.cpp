#include <iostream>
#include <vector>
using namespace std;
int main(){
     int m; //rows
    cout << "Enter the number of rows: ";
    cin >> m;
    int n; //columns
    cout << "Enter the number of columns: ";
    cin >> n; 
    int arr[m][n];
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    // max
    int sum = 0;
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
           sum += arr[i][j];
        }
    }
    cout << "Sum of elements is: " << sum << endl;
    
}