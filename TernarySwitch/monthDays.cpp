#include <iostream>
using namespace std;

int main(){
    int month_num;
    cout << "Enter a Month Number:";
    cin >> month_num;
    switch(month_num){
    case 1:
        cout << "January 31 Days";
        break;
    case 2:
        cout << "Febuary 28 Days";
        break;
    case 3:
        cout << "March 31 Days";
        break;
    case 4:
        cout << "April 30 Days";
        break;
    case 5:
        cout << "May 31 Days";
        break;
    case 6:
        cout << "June 30 Days";
        break;
    case 7:
        cout << "July 31 Days";
        break;
    case 8:
        cout << "August 31 Days";
        break;
    case 9:
        cout << "September 30 Days";
        break;
    case 10:
        cout << "October 31 Days";
        break;
    case 11:
        cout << "November 30 Days";
        break;
    case 12:
        cout << "December 31 Days";
        break;
        default:
        cout << "Invalid Number";
        
    }
    return 0;
}