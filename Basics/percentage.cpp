#include <iostream>
using namespace std;
int main(){
    float Phy;
    Phy = 91;
    float chem;
    chem = 94;
    float bio;
    bio = 85;
    float eco;
    eco = 75;
    float urdu;
    urdu = 82;
    float percent = (Phy + chem + bio + eco + urdu) / 5;
    cout << percent;
    return 0;
}