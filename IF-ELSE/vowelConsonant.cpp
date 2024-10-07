#include <iostream> 
using namespace std;

int main(){
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    int ascii = (int)ch;
    if((ascii>=97 && ascii <=122) || (ascii>=65 && ascii <=90)){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch = 'o' || ch = 'u'){
            cout << "It is a vowel.";
        }else {
            cout << "It is a consonant.";
        }
    }else {
        cout << "It is not an Alphabet.";
    }
    // if(ascii>=65 && ascii <=90){
    //     cout << "Yes, it is an Uppercase Letter.";
    // }
    return 0;
}