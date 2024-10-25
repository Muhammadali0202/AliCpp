#include <iostream>
using namespace std;
int main(){
    int x ;
    int* p = &x;
    cout << "Enter Num 1: ";
    cin >> *p;
    int y ;
    int *p2 = &y;
    cout << "Enter Num 2: ";
    cin >> *p2;
    
    
    cout << "Num 1: "<< *p << endl;
    cout << "Num 2: "<<*p2 << endl;
    cout << "Sum: "<<*p + *p2<< endl;
}