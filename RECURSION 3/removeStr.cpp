#include <iostream>
#include <string>
using namespace std;
//void removeChar(string ans, string original){
//	if(original.length()  == 0){
//		cout << ans;
//		return;
//	}
//	char ch = original[0];
//	if(ch == 'a') removeChar(ans,original.substr(1));
//	else removeChar(ans+ch,original.substr(1));
//}
void removeChar(string ans, string original, int idx){
	if(idx == original.length()){
		cout << ans;
		return;
	}
	char ch = original[idx];
	if(ch == 'a') removeChar(ans,original, idx+1);
	else removeChar(ans+ch,original, idx+1);
}
int main(){
	string str = "raghav garg";
	removeChar("",str,0);
}