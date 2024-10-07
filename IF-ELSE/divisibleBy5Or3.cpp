#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(n%3==0 || n%5==0){
        cout<< "Yes, it is Divisible by 3 or 5";
    }else{
        cout << "NO, it is not Divisible by 3 or 5";
    }
    return 0;
}