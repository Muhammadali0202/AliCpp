#include <iostream>
using namespace std;
int lastDigit(int n){
    return n%10;
}
int sum(int num){
    int sumOfDigit = 0;
    while(num>0){
        lastDigit(num);
        sumOfDigit = sumOfDigit + lastDigit(num);
        num = num/10;
    }
    return sumOfDigit;

}
int main(){
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    cout << sum(n);

}