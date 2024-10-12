//SOLID SQUARE 

// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout << "No. of row: ";
//     cin >> n;
//     cout << "No. of colums: ";
//     cin >> m;
//     if(n == m){
//         for(int i=1; i<=n; i++){
//             for(int j=1; j<=m; j++){
//                 cout << "*";
//             }
//             cout << endl;
//         }
//     }else{
//         cout << "Not according to question";
//     }
//     return 0;
// }

//ALTERNATIVE CODE

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "No. of row: ";
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << "*";
        }
            cout << endl;
    }
    return 0;
}