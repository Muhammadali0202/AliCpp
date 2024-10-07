#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    if(n > 0){
        cout<< "The absolute value of Number is: " << n;
    }else{
        cout << "The absolute value of Number is: " << -(n);
        
    }
    return 0;
}