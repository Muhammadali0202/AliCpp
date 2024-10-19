//Q write a function to print squares of first n natural numbers, taking n as argument to the funtion
#include <bits/stdc++.h>
using namespace std;
// int square(int num){
//     return num * num;
// }
void squareNatural(int n){
    int sqr;
    for(int i = 1; i<=n; i++){
         sqr = i * i;
         cout << sqr << endl;
    }
}
int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    squareNatural(n);
    
}