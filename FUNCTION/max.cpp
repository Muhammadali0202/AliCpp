#include <iostream>
using namespace std;
int max(int a, int b,int c){
    // int maxi;
    if(a>b && a>c){
        // maxi = a;
        return a;
    }else if(b>a && b>c){
        // maxi = b;
        return b;
    }else if(c>b && c>b){
        // maxi = c;
        return c;
    }
    // int maximum = max(a,b,c);
    
}
int main(){
    int a;
    cout << "Enter 1st number: ";
    cin >> a;
    int b;
    cout << "Enter 2nd number: ";
    cin >> b;
    int c;
    cout << "Enter 3rd number: ";
    cin >> c;
    cout << max(a,b,c);
}