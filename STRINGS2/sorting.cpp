#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    sort(s.begin(), s.end()); //sorts the characters according to their ASCII values
    cout << s;
    return 0;
}