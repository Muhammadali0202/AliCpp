#include <iostream>
#include <string>
#include <vector>
using namespace std;
void storeSubset(string ans, string original, vector <string>& v, bool flag){
	if(original==""){
		v.push_back(ans);
		return;
	}
	char ch = original[0];
	if(original.length()==1){
		if(flag == true)storeSubset(ans+ch,original.substr(1),v,true);
		storeSubset(ans,original.substr(1),v,true);
		return; //takai neechai ki dou condition na chahlain
	}
	char dh = original[1];
	if(ch==dh){ // incase of Duplicate this will run
		if(flag == true) storeSubset(ans+ch,original.substr(1),v,true);
		storeSubset(ans,original.substr(1),v,false);
	}else{ //incase it is not Duplicate
		if(flag == true) storeSubset(ans+ch,original.substr(1),v,true);
		storeSubset(ans,original.substr(1),v,true);
	}
}
int main(){
	string str = "aab";
	vector <string> v;
	storeSubset("",str,v,true);
	for(string ele: v){
		cout << ele << endl;
	}
	

}