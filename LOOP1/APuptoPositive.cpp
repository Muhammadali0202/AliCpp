#include <iostream>
using namespace std;

int main(){
    // int n;
    // cout << "Enter a Number: ";
    // cin >> n;
    // 100 97 94 91 88 ...
    int a = 100;
    for(int i = 1; a>0; i++){
        cout << a << endl;
        a = a - 3;
    }
    return 0;
}