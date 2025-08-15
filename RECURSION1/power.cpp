#include<iostream>
using namespace std;
int power(int a, int b){
	if(b==0) return 1;
	return a * power(a,b-1); 
}
int main(){
	int a;
	int b;
	cout << "Enter base: ";
	cin>> a;
	cout << "Enter exponent: ";
	cin >> b;
	
	cout << a << " raised to the power of " << b << " is " << power(a,b);
}