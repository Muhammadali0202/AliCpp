#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a Number: ";
    cin >> num;
    int count = 0;
    int a = num;
    while(num>0){
        num = num/10;
        count++;
    }
    if( a == 0 ){
        cout << 1;
    }else {
        cout << count;
    }
}