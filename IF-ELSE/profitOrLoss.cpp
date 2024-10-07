#include <iostream>
using namespace std;

int main(){
    cout << "Enter cost price of Item:";
    int cprice;
    cin >> cprice;
    cout << "Enter selling price of Item:";
    int sprice;
    cin >> sprice;
    if(sprice > cprice){
        int profit = sprice - cprice;
        cout << "You have made profit i.e: " << profit;
    }if(sprice < cprice) {
        int loss = cprice - sprice;
        cout << "You have made loss i.e: " << loss;
    }if(sprice == cprice) {
        cout << "You have neither made profit nor loss!";
    }
    return 0;
}