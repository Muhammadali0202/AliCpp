#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    for(int count = 2; count<=n-1; count++){
        if(n%count==0){
            cout << n << " is a composite Number";
        }
        break;
    }
    return 0;
}