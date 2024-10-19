#include <iostream>
using namespace std;
void swap(int a, int b){
   int temp = a;
    a = b;
    b = temp;
    return;
}

int main(){
    int a;
    cout << "Enter 1st number: ";
    cin >> a;
    int b;
    cout << "Enter 2nd number: ";
    cin >> b;
    cout << "Before Swapping: " << a << " " << b <<endl;
    // a = a + b;
    // b = a - b;
    // a = a - b;
    swap(a,b);
    cout << "After Swapping: " <<a << " " << b;
   
}