#include <iostream>
using namespace std;
int main(){
    char str[5] = {'H', 'e', 'l', 'l', 'o'};
    char str2[6] = "Hello";
    for(int i = 0; i < 5; i++){
        cout << str[i];
    }
    cout << endl;
    cout << str2 << endl;
}