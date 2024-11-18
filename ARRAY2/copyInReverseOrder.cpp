#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void display(vector<int> &v){
    for(int i = 0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
   vector<int> v;
   v.push_back(1);
   v.push_back(6);
   v.push_back(2);
   v.push_back(3);
   v.push_back(7);
   v.push_back(4);
   display(v);
   vector<int> v2(v.size());
    for(int i = 0; i<v.size();i++){ 
        int j = v.size()-1-i;
        v2[i] = v[j];
    }
    display(v2);
} 