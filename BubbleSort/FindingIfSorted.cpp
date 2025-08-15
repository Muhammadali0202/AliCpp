//Question: find if array is sorted #include <iostream>
#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int arr[6] = {5,4,6,3,2,1};
    int n = 6;
    bool flag = true;
    for(int i=0; i<n-1; i++){
    	for(int j = 0; j<n-1; j++){
    		if(arr[j] > arr[j+1]){
    			flag = false;
    			break;
			}
		}
	}
	if(flag == true){
		cout << "array is sorted"<< endl;
	}else{
		cout << "array is NOT sorted " << endl;
	}

}