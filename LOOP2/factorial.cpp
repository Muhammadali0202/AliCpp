
//FACTORIAL OF A NUMBER

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter a Number: ";
//     cin >> n;
//     int fact = 1;
//     for(int i= 1; i<=n;i++){
//         fact *= i;
//     }
//     if(n == 0){
//         fact = 1;
//     }
//      cout << fact;
// }


#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    int fact = 1;
    for(int i= 1; i<=n;i++){
        fact *= i;
        cout << "Factorial of " << i << " is: " << fact << endl;
    }
    
}