#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector <int> v; //initial size = 5, each element has value 7
    v.push_back(9);
    v.push_back(10);  
    v.push_back(6); 
    v.push_back(1);  
    // v.at(2) = 5; // v[2] = 5;
    // cout << v.at(2) << endl;
    for(int i = 0; i<v.size(); i++){
        cout << v.at(i)<< " ";
    }
    cout << endl;
    // sort
    sort(v.begin(), v.end());
    for(int i = 0; i<v.size(); i++){
        cout << v.at(i) << " ";
    }
    cout << endl;

}