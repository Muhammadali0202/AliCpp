#include <iostream>
using namespace std;

int main(){
    float p;
    cout << "Enter Principle: ";
    cin >> p;
    float r;
    cout << "Enter Rate: ";
    cin >> r;
    float t;
    cout << "Enter Time: ";
    cin >> t;
    float I = (p * r * t) / 100;
    cout << "The Interest is: " << I;
    return 0;
}