#include <iostream>
#include <string>
using namespace std;
int main(){
    // string str = "Muhammad Ali is a good boy";
    // cout << str;
    string s;
    // cin>> s; //only if the given string has no spaces
    getline(cin,s); //VVIMP
    cout << s;
}