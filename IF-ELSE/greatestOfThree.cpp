#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter 1st Number: ";
    cin >> a;
    cout << "Enter 2nd Number: ";
    cin >> b;
    cout << "Enter 3rd Number: ";
    cin >> c;
    if(a > c && a > b){
        cout << a << " is The Greatest.";
    } if(c > a && c > b){
        cout << c << " is The Greatest.";
    } if(b > a && b > c){
        cout << b << " is The Greatest.";
    }
    return 0;
}