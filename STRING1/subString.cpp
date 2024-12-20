#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    // string s = "abcdef";
    // // s.substr(idx,len)
    // cout << s.substr(2,3); //cdef
    string str; 
    cout << "Enter a String: ";
    cin >> str;
    //abcdefgh  -> n=8
    int n = str.length();
    cout << str.substr(n/2);
}