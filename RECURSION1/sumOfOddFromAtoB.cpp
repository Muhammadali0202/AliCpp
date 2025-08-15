#include<iostream>
using namespace std;
int sum(int a,int b){
	if(a>b){
		return 0;
	} 
	if(a%2 == 0){
		return sum(a+1,b);
	}else{
		return a+sum(a+2,b);
	}
}
int main(){
	int a,b;
	cout << "Enter a number (A and B): ";
	cin >> a >> b;
	cout <<  sum(a,b);
}

