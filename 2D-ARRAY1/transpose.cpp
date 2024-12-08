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
    cout << endl;
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout << endl;
    // printing transpose of matrix
    for(int j = 0; j<n; j++){
        for(int i = 0; i<m; i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // storing transpose in new matrix
    t[n][m]; 

}