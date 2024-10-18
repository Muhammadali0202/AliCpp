#include <iostream>
using namespace std;
void starTriangle(int x){

    for(int i = 1; i<=x ; i++){
        for(int j = 1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
}
}

int main(){
    int n;
    cin >> n;
    starTriangle(n);
}