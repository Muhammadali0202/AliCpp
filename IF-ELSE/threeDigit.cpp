#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(n>99 && n<1000){
        cout<< "Yes, it is a Three Digit Number!";
    }else{
        cout << "NO, it is not a Three Digit Number!";
    }
    return 0;
}