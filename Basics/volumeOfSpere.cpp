#include <iostream>
using namespace std;
int main(){
    float pi = 3.1415;
    float r;
    cout << "Enter the Radius: ";
    cin >> r;
    float v = (4 * pi * r * r * r)/3;
    cout << "The Volume of Given Radius is: " << v;
    return 0;
}