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
void reversePart(vector<int> &v, int i, int j){
    while(i<=j){
        int temp = v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return;
}
void reverseFun(vector<int> &v){
    int i = 0;
    int j = v.size()-1;
    while(i<=j){
        int temp = v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
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
   //reverse
//    int i = 1;
//    int j = v.size()-2;
//    while(i<=j){
//     //swap v[i] and v[j]
//     int temp = v[i];
//     v[i] = v[j];
//     v[j] = temp;
//     i++;
//     j--;  
//    }
// for(int i=1,j=v.size()-2;i<=j;i++,j--){
//     int temp = v[i];
//     v[i] = v[j];
//     v[j] = temp;     
// }
reverseFun(v);
reversePart(v,1,4);
   display(v); 
} 