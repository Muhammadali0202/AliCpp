#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin >> n;
    char str[n];
    for(int i = 0; i<n; i++){
        cin >> str[i];
    }
    cout << str << endl;
    // str[1] = 'o';
    for(int i =0; i<n; i++){
        if(i%2 ==0){
            str[i] = 'a';
        }
    }
    cout << str;

}