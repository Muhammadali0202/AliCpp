#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    int mark[n];
    for(int i = 0;i<=n-1;i++){
        cin>>mark[i];
    }
    for(int i = 0; i<=n-1; i++){
        if(mark[i]<35){
            cout<<i<<" ";
        }
    }
    return 0;
}