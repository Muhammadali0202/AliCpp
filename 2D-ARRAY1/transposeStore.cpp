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
    // storing transpose in new matrix
    int  t[n][m]; 
    for(int i = 0; i<n; i++){
        for(int j= 0; j<m; j++){
            t[i][j] = arr[j][i];
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }

}