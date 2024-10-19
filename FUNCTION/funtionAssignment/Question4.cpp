#include <iostream>
using namespace std;
void digits(int num){
    int count = 0;
    int a = num;
    while(num>0){
        num = num/10;
        count++;
    }
    if( a == 0 ){
        cout << 1 << endl;
    }else {
        cout << count <<endl;
    }
    cout << count * count;
}
int main(){
    int num;
    cout << "Enter a Num: ";
    cin >> num;
    digits(num);
}