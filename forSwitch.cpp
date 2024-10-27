// #include <iostream>
// using namespace std;
// int main(){
// 	int num;
//     cout <<"Enter a number: ";
// 	cin >> num;
// 	for(int i = 0; i <= num; i++){
// 		if(num==0){
// 			break;
// 		}
// 		switch(num % 2){
// 			case 0:
// 			cout << num << "is even.";
// 			break;
// 			case 1:
// 			cout << num << "is odd.";
// 			break;
// 		}
// 		cout << "Enter a number: ";
// 		cin >> num;

// 	}
// }

#include <iostream>
using namespace std;
int main(){
	for(int i; i!=0; ){
	cout << "Enter a Number: ";
	cin >> i;
	if(i == 0){
		cout << "End";
		break;
	}
	switch(i%2){
				case 0:
				cout << i << " is even" << endl;
				break;
				case 1:
				cout << i << " is odd"<< endl;
				break;
			}
		}	
		return 0;	
}
	
	
	