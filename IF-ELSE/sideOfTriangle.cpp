#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<< "Enter 1st Side Of a Triangle: ";
    cin >> a;
    cout<< "Enter 2nd Side Of a Triangle: ";
    cin >> b;
    cout<< "Enter 3rd Side Of a Triangle: ";
    cin >> c;
    if((a + b > c) && (c + b > a) && (a + c > b)){
        cout << "It is a Triangle.";
    }else{
        cout << "It is not a Triangle.";
    }
}