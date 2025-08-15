#include <iostream>
#include <string>
#include <vector>
using namespace std;
//void printSubset(string ans, string original){
//	if(original.length()==0){
//		cout << ans << endl;
//		return;
//	}
//	char ch = original[0];
//	printSubset(ans,original.substr(1));
//	printSubset(ans+ch,original.substr(1));
//}
void printSubset(string ans, string original, int idx){
	if(idx == original.length()){
		cout << ans << endl;
		return;
	}
	char ch = original[idx];
	printSubset(ans,original, idx+1);
	printSubset(ans+ch,original,idx+1);
}

void storeSubset(string ans, string original, vector <string>& v){
	if(original==""){
		v.push_back(ans);
		return;
	}
	char ch = original[0];
	storeSubset(ans,original.substr(1),v);
	storeSubset(ans+ch,original.substr(1),v);
}
int main(){
	string str = "abc";
//	printSubset("",str);
//	printSubset("",str,0);
	vector <string> v;
	storeSubset("",str,v);
	for(string ele: v){
		cout << ele << endl;
	}
	

}