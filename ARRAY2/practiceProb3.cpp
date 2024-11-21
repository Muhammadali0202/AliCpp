//CHECK IF THE ARRAY IS SORTED OR NOT
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
    bool isSorted = true;
    for(int i = 0; i<v.size();i++){
        if(v[i]>v[i+1]){
            isSorted = false;
            break;
        }
    }
    if(isSorted){
        cout << "Array is sorted" << endl;
    }else{
        cout << "Array is not sorted" << endl;
    }
}
