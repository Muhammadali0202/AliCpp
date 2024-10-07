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
    if(a > b ){
        if(a>c){
            cout << a << " is the greatest.";
        }else{ //c>a a>b => c>b>a
            cout << c << " is the greatest.";   
        }
    }else{ //=>b>a
        if(b>c){
            cout << b << " is the greatest.";
        }else {
            cout << c << " is the greatest.";
        }
    }
    
    return 0;
}