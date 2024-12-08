#include <iostream>
#include <vector>
using namespace std;
int main(){
    //  int m; //rows
    // cout << "Enter the number of rows : ";
    // cin >> m;
    // int n; //columns
    // cout << "Enter the number of columns: ";
    // cin >> n; 
    // cout << "Enter the elements of first matrix: ";
    // int a[m][n];
    // for(int i = 0; i<m; i++){
    //     for(int j = 0; j<n; j++){
    //         cin>>a[i][j];
    //     }
    // }
    // cout << "Enter the elements of second matrix: ";
    // int b[m][n];
    // for(int i = 0; i<m; i++){
    //     for(int j = 0; j<n; j++){
    //         cin>>a[i][j];
    //     }
    // }
    // int res[m][n];
    //  for(int i = 0; i<m; i++){
    //     for(int j = 0; j<n; j++){
    //           res[i][j] = a[i][j] + b[i][j];
    //     }
    // }
    // cout << "Sum of two matrices is: " << endl;
    // for(int i = 0; i<m; i++){
    //     for(int j = 0; j<n; j++){
    //         cout<<res[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int a[2][3] = {1,2,3,4,5,6};
    int b[2][3] = {7,8,9,10,11,12};
    // int res[2][3];
    // // sum of two matrices
    // for(int i = 0; i<2; i++){
    //     for(int j = 0; j<3; j++){
    //           res[i][j] = a[i][j] + b[i][j];
    //     }
    // }
    // for(int i = 0; i<2; i++){
    //     for(int j = 0; j<3; j++){
    //         cout<<res[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
     
    // WITHOUT USING THIRD MATRIX
    // for(int i = 0; i<2; i++){
    //     for(int j = 0; j<3; j++){
    //          cout<< a[i][j] + b[i][j] << " ";
    //     }
    //     cout<<endl;
    // }
    // DOING THE SAME THING IN B MATRIX
    for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
             cout<< a[i][j]<< " ";
        }
        cout<<endl;
    }
    for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
             cout<<  b[i][j] << " ";
        }
        cout<<endl;
    }
    cout << "===============================\n";
    // B KE ANDAR HI ADD KAR DO
    for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
             b[i][j] += a[i][j];
        }
    }
    for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
             cout<<   b[i][j] << " ";
        }
        cout<<endl;
    }
}