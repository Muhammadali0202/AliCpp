#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter a Number: ";
    cin >> x;
    if(x % 2 == 0){
        cout << "YES, It is an Even Number.";
    }else{
        cout << "It is an Odd Number.";
    }
    return 0;
}