//    *****
//   ***** 
//  *****
// *****
// SELF DONE 😭😭


#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter No. of Rows: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++){
            cout << " ";
        }
        for(int k = 1; k <= i; k++){
            cout << "*";
        }
        for(int l = 1; l <= n+1-i; l++){
            cout << "*";
        }
        cout << endl;
    }
}