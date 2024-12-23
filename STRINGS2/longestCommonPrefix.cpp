#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector<string> v;
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");
    // lexographically
    for(int i = 0; i<v.size(); i++){
        cout << v[i] << endl;
    }
    cout << endl; 
    sort(v.begin(), v.end());
    for(int i = 0; i<v.size(); i++){
        cout << v[i] << endl;
    }
}