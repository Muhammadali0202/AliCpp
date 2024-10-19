#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter 1st number: ";
    cin >> a;
    int b;
    cout << "Enter 2nd number: ";
    cin >> b;
    cout << "Before Swapping: " << a << " " << b <<endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "After Swapping: " <<a << " " << b;
    