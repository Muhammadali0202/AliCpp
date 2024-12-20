#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    //reverse first half
    int len = s.length();
    reverse(s.begin()+1,s.begin()+5);
    cout << s;
}