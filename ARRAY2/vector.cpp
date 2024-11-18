#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v; //you need not mention size
    // inserting / input do not use []
    v.push_back(6);
    cout << v.size() << endl;
    v.push_back(1);
    cout << v.size() << endl;
    // v[1] = 1; //will give us garbage value
    v.push_back(9);
    cout << v.size() << endl;
    v.push_back(0);
    cout << v.size() << endl;
    
    // if you want to access / update
    
    // cout << v[0] << " ";
    // cout << v[1] << " ";
    // cout << v[2] << " ";
    // cout << v[3] << " ";


}