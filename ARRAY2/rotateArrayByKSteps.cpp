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

int main(){
   vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);
    display(v);
    int n=v.size();
    int k = 3;
    if(k>n){
        k=k%n;
    }
    reversePart(v,0,n-k-1);
    reversePart(v,n-k,n-1);
    reversePart(v,0,n-1);
    display(v);
} 