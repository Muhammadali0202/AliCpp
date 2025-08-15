#include <iostream>
using namespace std;
int main(){
	int arr[] = {0,0,0,0,1,1};
	int n = 6;
	int x = 1;
	
	int lo = 0;
	int hi = n-1;
	int count = 0;
	int idx = -1;
	while(lo <= hi){
		int mid = lo + (hi-lo)/2;
		if(arr[mid] == x){
			idx = mid;
			hi = mid-1;
			count++;
		}else {
			
			lo = mid +1;
		}
	}
	if(idx == -1){
		count = 0;
	}else{
		count = n-idx;
	}
	cout << count;
	
}