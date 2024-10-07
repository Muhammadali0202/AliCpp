
//TWO NUMBERS ARE ENTERED THROUGH THE KEYBOARD. WRITE A PROGRAM TO FIND THE VALUE OF ONE NUMBER RAISED TO THE POWER OF ANOTHER.
//THIS CODE & LOGIC IS SELF WRITTEN 😭😭

#include<iostream>
using namespace std;
int main(){
    float a,b,power=1.0;
    cout << "Enter base: ";
    cin >> a;
    cout << "Enter exponent: ";
    cin >> b;
    if(b > 0){
    for(int i= 1; i<=b;i++){
        power *= a;
    }
    }
    else{
        for(int j = 1; j <= -b; j++){
            power = power * (1/a);
        }
    }
    if( a==0 && b==0){
        cout << " Not defined";
    }else{
        cout << power;
    }
    return 0;
}