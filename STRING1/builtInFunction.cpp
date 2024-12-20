#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    // string str = "Ali is a good boy";
    // cout << str.size();
    // cout << str.length();
    // int len = str.length();

    // string str = "abcd";
    // cout << str << endl;
    // str.push_back('e');
    // cout << str << endl;

    // string s = "raghav";
    // cout << s << endl;
    // s.pop_back();
    // cout << s << endl;

    // string s = "abc";
    // cout << s << endl;
    // string t = "def";
    // s = s+t;  // "+" operator modifies the string
    // cout << s << endl;
    // s = t+s;
    // cout << s << endl;

    string s = "abcdef";
    cout << s << endl;
    reverse(s.begin()+2,s.end()-1);
    cout << s << endl;
}