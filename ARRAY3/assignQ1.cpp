// Count the number of triplets whose sum is equal to the given value x.
#include <iostream>
#include <vector>
using namespace std;
int triplitSum(vector<int> &v, int x){
    int n = v.size();
    int count = 0;
    for(int i = 0; i<n-2; i++){
        for(int j = 0; j<n-1; j++){
            for(int k = 0; k<n; k++){
                if(v[i] + v[j] + v[k] == x){
                    count++;
                }
            }
        }
    }
    return count;
}
int main(){
    vector<int> v = {1, 5, 3, 2, 7, 6};
    int x = 10;
    cout << "Count triplets with sum equal to x : " << triplitSum(v, x) << endl;
    
}