#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(6); // 1 2
    v.push_back(1); // 2 2
    v.push_back(9); // 3 4
    v.push_back(0); // 4 4 
    v.push_back(6); // 5 8
    v.push_back(1); // 6 8
    v.push_back(9); // 7 8
    v.push_back(0); // 8 8
    v.push_back(6); // 9 16
    v.push_back(1); // 10 16
    v.push_back(6); // 11 16
    v.push_back(1); // 12 16
    v.push_back(9); // 13 16
    v.push_back(0); // 14 16    
    v.push_back(6); // 15 16
    v.push_back(1); // 16 16
    v.push_back(9); // 17 32
    v.push_back(0); // 18 32
    v.push_back(6); // 19 32
    v.push_back(1); // 20 32
    cout<< "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    
    

}