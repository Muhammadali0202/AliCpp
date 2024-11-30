//Find the first non-repeating element in the array
#include <iostream>
#include <vector>
using namespace std;
int firstNonRepeating(vector<int> &v){
    int n = v.size();
    for(int i = 0; i<n; i++){
        bool unique = true;
        for(int j = 0; j<n; j++){
            if(i!=j && v[i] == v[j]){
                unique = false;
                break;
            }
        }
        if (unique ==true){
            return v[i];
        }
    }
    return -1;
}
int main(){
    vector<int> v = {1, 2, 3, 4, 5, 1, 2, 3, 4};
    int result = firstNonRepeating(v);
    cout << "First non-repeating element is : " << result << endl;
}