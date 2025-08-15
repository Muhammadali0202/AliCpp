//kth largest
#include <iostream>
using namespace std;
int partition(int arr[], int si, int ei){
	int pivotElement = arr[(si+ei)/2];
	int count = 0;
	
	for(int i=si; i<=ei; i++){
	 	if(i==(si+ei)/2) continue;
		if(arr[i] >= pivotElement) count++; //change here
	}
	int pivotIdx = count +si;
	swap(arr[(si+ei)/2],arr[pivotIdx]);
	
	int i = si; 
	int j = ei;
	while(i<pivotIdx && j>pivotIdx){
		if(arr[i] >= pivotElement) i++; // change here
		else if(arr[j] < pivotElement) j--; //change here
		else { // change here 
			swap(arr[i], arr[j]);
			i++;
			j--;
		}
	}
	return pivotIdx;
}
int quickSelect(int arr[], int si, int ei, int k){
	int pi = partition(arr,si,ei);
	if(pi+1==k) return arr[pi];
	else if(pi+1<k) return quickSelect(arr,pi+1,ei,k);
	else return quickSelect(arr,si,pi-1,k);
	
	
}
int main(){
	int arr[] = {5,1,8,2,7,6,3,4,-8};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i= 0; i<n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	int k =4;
	cout << quickSelect(arr,0,n-1.,4);
	
}