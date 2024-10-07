#include<iostream>
using namespace std;
int main(){
    int n,lastDigit,reverse = 0;
    cout << "Enter a Number: ";
    cin >> n;
    while(n!=0){
        lastDigit = n%10;
        reverse = reverse * 10; 
        reverse += lastDigit;
        n/=10;
    }
     cout << reverse;
//      int n, reversed_number = 0, remainder;

//   cout << "Enter an integer: ";
//   cin >> n;

//   while(n != 0) {
//     remainder = n % 10;
//     reversed_number = reversed_number * 10 + remainder;
//     n /= 10;
//   }

//   cout << "Reversed Number = " << reversed_number;

  return 0;
}