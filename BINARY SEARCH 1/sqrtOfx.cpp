#include <iostream>
using namespace std;
int main(){
	int x = 20 ;
	int lo = 0;
	int hi = x;
	while(lo<=hi){
		int mid = lo +(hi-lo)/2;
		if(mid*mid == x){
			cout << mid;
		}else if(mid*mid>x){
			hi = mid-1;
		}else{
			lo = mid+1;
		}
	}
	cout << hi;z
}