#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
    int arr[] = {19,12,23,8,16};
    int n = 5;
    for(int ele : arr){
        cout << ele << " ";
    }
    cout << endl;
    vector<int> v(5,0);
    int x = 0;

    // for(int i = 0; i<n; i++){
    //     int min = INT_MAX;
    //     int mindx = -1;
    //     for(int j = 0; j<n; j++){
    //         if(v[j] == 1) continue;
    //         else{
    //             if(min>arr[j]){
    //                 min = arr[j];
    //                 mindx = j;
    //             }
    //         } 
    //     }
    //     arr[mindx] = x;
    //     v[mindx] = 1;
    //     x++;
    // }
    // if there is no negative number in the array, then we can use the above code to replace the elements with 0 and 1.
    for(int i = 0; i<n; i++){
        int min = INT_MAX;
        int mindx = -1;
        for(int j = 0; j<n; j++){
            if(arr[j] <=0) continue;
            else{
                if(min>arr[j]){
                    min = arr[j];
                    mindx = j;
                }
            } 
        }
        arr[mindx] = -x;
        x++;
    }
    for(int i = 0; i<n; i++){
        arr[i] = -arr[i];
        cout << arr[i] << " "; 
    }
}