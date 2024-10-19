//Q write a function that takes the radius of a circle as an argument and returns its area.
#include <iostream>
using namespace std;
void oddNum(int a, int b){

    for(int i = a; i <= b; i++){
        if(i%2 != 0){
            cout << i << endl;
        }
    }
}
int main(){
    int a;
    cout << "Enter 1st number: ";
    cin >> a;
    int b;
    cout << "Enter 2nd number: ";
    cin >> b;
    
    cout << oddNum(a,b);
    
}