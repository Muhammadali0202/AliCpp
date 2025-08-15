#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int arr[6] = {5,4,6,3,2,1};
    int n = 6;
    for(int i= 0; i<n; i++){
    	cout << arr[i] << " ";
	}
	cout << endl;
//  Bubble sort
//    for(int i = 0; i<n-1;i++){
//    	for(int j = 0; j<n-1-i; j++){
//    		if(arr[j] > arr[j+1]){
////    		int temp = arr[j];
////    		arr[j] = arr[j+1];
////    		arr[j+1] = temp;
////			Time complexity = O(n^2)
//			swap(arr[j],arr[j+1]);
//    			
//			}
//		}
//	}
// Best case = O(n)
// Avg. case = O(n^2)
// Worst case = O(n^2)
// BUBBLE SORT IS A STABLE SORT
//	Bubble Sort Optimised
	for(int i = 0; i<n-1;i++){
		bool flag = true;	
    	for(int j = 0; j<n-1-i; j++){
    		if(arr[j] > arr[j+1]){
//			Time complexity = O(n)
			swap(arr[j],arr[j+1]);
    		flag = false
			}
		}
		if(flag == true){
			break;
		}
	}
	for(int i= 0; i<n; i++){
		cout << arr[i] << " ";
	}

}