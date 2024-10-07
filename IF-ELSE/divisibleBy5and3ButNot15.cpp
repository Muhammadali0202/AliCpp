#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    if(n%5==0 || n%3==0){
        if(n%15 != 0){
            cout << "The Number is Divisible By 5 or 3 but Not by 15.";
        }else{
            cout << "Not matching the condition."
        }
    }else{
        cout << "Not matching the condition.";
    }
    //    if((n%5==0 || n%3==0) && n != 15){
    //     cout << "The Number is Divisible By 5 or 3 but Not by 15.";
        
    // }else{
    //     cout << "Not matching the condition.";
    // }
    return 0;
}