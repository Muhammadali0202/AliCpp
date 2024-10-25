#include <iostream>
using namespace std;
void swap(int *p, int *p2){
     int temp = *p;
    *p = *p2;
    *p2 = temp;
    return;
}

int main(){
    int a ;
    cout << "Enter 1st number: ";
    cin >> a;
    int b ;
    cout << "Enter 2nd number: ";
    cin >> b;
    cout << "Before Swapping: " << a << " " << b <<endl;
    swap(&a,&b);
   cout << "After Swapping: " << a << " " << b <<endl;
}