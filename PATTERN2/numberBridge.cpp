// 1234567
// 123 567
// 12   67
// 1     7

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int l= 1; l <= 2*n-1;l++){
        cout << l;
    }
    cout << endl;
    int m = n-1;
    int nsp = 1;
    for(int i = 1; i <= m; i++){
        int a = 1;
        for(int j = 1; j <= m+1-i ; j++){
            cout << a;
            a++;
        }
        for(int k = 1; k <= nsp ; k++ ){
            cout << " ";
            a++;
        }
        nsp += 2;
        
        for(int j = 1; j <= m+1-i ; j++){
            cout << a;
            a++;
        }
        cout << endl;
    }
}