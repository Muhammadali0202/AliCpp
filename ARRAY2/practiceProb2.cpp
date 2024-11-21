//FIND THE MAXIMUM, SECOND MAXIMUM AND THIRD MAXIMUM ELEMENT IN AN ARRAY
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int max = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;
    for(int i=0; i<v.size(); i++){
        if(v[i] > max){
            max = v[i];
        }
    }
    for(int i=0; i<v.size(); i++){ 
        if(v[i] > max2 && v[i] < max){
            max2 = v[i];
        }  
    }
    for(int i=0; i<v.size(); i++){
        if(v[i] > max3 && v[i] < max2){
            max3 = v[i];
        }
    }
    cout << "First max: " << max << endl;
    cout << "Second max: " << max2 << endl;
    cout << "Third max: " << max3 << endl;
}
