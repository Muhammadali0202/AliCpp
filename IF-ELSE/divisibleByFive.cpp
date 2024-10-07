#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter a Number: ";
    cin >> x;
    if(x % 5 == 0){
        cout << "YES, It is divisible by 5.";
    }else{
        cout << "NO, It is not divisible by 5.";
    }
    return 0;
}