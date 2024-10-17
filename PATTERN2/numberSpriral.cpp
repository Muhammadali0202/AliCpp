//STEP 1
// 1111
// 1222
// 1233
// 1234
// for(int i = 1; i<=n; i++){
//         for(int j = 1; j<= n; j++){
//             cout << min(i,j);
//         }
//         cout << endl;
//     }
//STEP 2
// 1111111
// 1222221
// 1233321
// 1234321
// 1233321
// 1222221
// 1111111
// for(int i = 1; i<=2*n-1; i++){
//         for(int j = 1; j<= 2*n-1; j++){
//             int a = i;
//             int b = j;
//             if(a>n) a=2*n-i;
//             if(b>n) b=2*n-j;
//             cout << min(a,b);
//         }
//         cout << endl;
//     }


#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a NUmber: ";
    cin >> n;

    //FINAL STEP
    for(int i = 1; i<=2*n-1; i++){
        for(int j = 1; j<= 2*n-1; j++){
            int a = i;
            int b = j;
            if(a>n) a=2*n-i;
            if(b>n) b=2*n-j;
            int x = min(a,b);
            int print = n-x+1;
            cout << print;
        }
        cout << endl;
    }
}