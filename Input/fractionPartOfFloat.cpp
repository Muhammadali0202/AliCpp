#include <iostream>
using namespace std;

int main(){
    float x;
    cout<<"Enter a Number: ";
    cin>>x;
    float y = (int)x;
    if(y<0){
        y = y-1;
    }
    cout<< "The Fractional Number is:" << x-y;
    return 0;
}