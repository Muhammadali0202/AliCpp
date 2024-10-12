//SOLID RECTANGLE

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "No. of rows: ";
    cin >> n;
    int m;
    cout << "No. of Column: ";
    cin >> m;
    for(int i = 1; i <= n; i++){
        for(int j= 1; j<= m; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}