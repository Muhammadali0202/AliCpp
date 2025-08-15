#include <iostream>
using namespace std;
void fun(int n){
	if(n==0){
		return;
	}
	cout << "Good Morning!" << endl;
	fun(n-1);
}
int main(){
	int num;
	cout<<"Enter a number to print good morning: ";
	cin >> num;
	fun(num);
}