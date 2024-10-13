//    *
//   **
//  ***
// ****


#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter No. Of Rows: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        //for spaces
        for(int j = 1; j <= n-i; j++){
            cout << " ";
        }
        //for stars
        for(int k = 1;k <= i; k++){
            cout << "*";
        }
        cout << endl;
    }
}