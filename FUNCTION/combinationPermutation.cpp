#include<iostream>
using namespace std;
int fact(int x){
    int fac = 1;
    for(int i = 2; i<=x ; i++){
        fac *= i;
    }
    return fac;
}
int combination(int n,int r){
    
    int nCr =  fact(n)/( fact(r) * fact(n-r));
    return nCr;
}
int permutation(int n,int r){
    int nPr = fact(n)/fact(n-r);
    return nPr;
}
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    int r;
    cout << "Enter r: ";
    cin >> r;
    // int nfact = 1;
    // for(int i = 2; i <=n; i++){
    //     nfact *= i;
    // }
    
    // int rfact = 1;
    // for(int i = 2; i <=r; i++){
    //     rfact *= i ;
    // }
    
    // int nrfact = 1;
    // for(int i = 2; i <=n-r; i++){
    //     nrfact *= i;
    // }
    
    int ncr =  combination(n,r);
    int npr = permutation(n,r);

    cout << ncr << endl << npr;
}