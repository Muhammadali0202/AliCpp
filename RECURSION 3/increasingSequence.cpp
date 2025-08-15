#include <iostream>
#include <string>
#include <vector>
using namespace std;
void printSubset(int arr[], int n, int idx,vector <int>v, int k ){
	if(idx==n){
		if(v.size()==k){
			for(int i=0; i<v.size(); i++){
				cout << v[i] << " ";
			}
			cout << endl;
			
		}
		return;
	}
	if(ans.size+(n-idx) < k) return;
	printSubset(arr,n,idx+1,v,k);
	v.push_back(arr[idx]);
	printSubset(arr,n,idx+1,v,k);
}

int main(){
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	vector <int> v;
	int k =3;
	printSubset(arr,n,0,v,k);
	
	

}