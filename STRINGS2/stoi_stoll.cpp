#include <iostream>
#include <string>
using namespace std;
int main(){
    string str = "12345";
    int x = stoi(str);
    cout << x << endl;

    //stoll
    string str2 = "123456789123456789";
    long long y = stoll(str2);
    cout << y << endl;
}