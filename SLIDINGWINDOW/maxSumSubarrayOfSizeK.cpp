#include <iostream>
using namespace std;
int main(){
	int arr[] = {7,1,2,5,8,4,9,3,6};
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 3;
	int maxSum = INT_MIN;
	int preSum = 0;
	for(int i = 0; i<k; i++){
		preSum +=arr[i];
	}
	maxSum = preSum;
	//Sliding window algorithm
	int i = 1;
	int j = k;
	while(j<n){
		int curSum = preSum + arr[j] - arr[i-1];
		if(maxSum < curSum){
			maxSum = curSum;
		}
		preSum = curSum;
		i++;
		j++;
	}
	cout << maxSum;
}