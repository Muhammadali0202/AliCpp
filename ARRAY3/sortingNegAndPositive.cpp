#include <iostream>
#include <vector>
#include <algorithm>   
using namespace std;
// This is the optimized version of the above code
void sortNegPos(vector <int> &v){
    int n = v.size();
    int i = 0;
    int j = n-1;
    while(i<j){
    while(v[i] >= 0 && i<j) {
        i++;
    }
    while(v[j] < 0 && i<j) {
        j--;
    }
    if(i<j){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
    
}
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(-4);
    v.push_back(5);
    v.push_back(3);
    v.push_back(-1);
    v.push_back(-3);
    v.push_back(8);
    v.push_back(6);
    for(int i = 0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    //sorting 0's and 1's
    // sort01(v);
    sortNegPos(v);
    // sort(v.begin(),v.end());
    
    for(int i = 0; i<v.size(); i++){
        cout << v[i] << " ";
    }
}