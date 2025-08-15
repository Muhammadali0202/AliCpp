#include <iostream>
#include <vector>
void merge(vector<int> &a, vector<int> &b,vector<int> &res){
	int i= 0, j=0, k=0;
	
	while(i<a.size() && j<b.size()){
		if(a[i] <=b[j]) res[k++] = a[i++]; 
		else res[k++] = b[j++];
	}
	if(i==a.size()) while(j<b.size()) res[k++] = b[j++];
		
	if(j==b.size()) while(i<a.size()) res[k++] = a[i++];
}
void mergeSort(vector<int> &v){
	int n = v.size();
	if(n==1) return;
	int n1=n/2, n2 = n-n1;
	vector<int> a(n1), b(n2);
	//copy pasting vectors
	for(int i = 0; i<n1; i++) a[i]= v[i];
	for(int i = 0; i<n2; i++) b[i] = v[i+n1];
	//magic aka recursion
	mergeSort(a);
	mergeSort(b);
	//merging again
	merge(a,b,v);
	a.clear();
	b.clear();
}
int main(){
	vector<int> v = {3, 5, 6, 1, 2};
	for(int i = 0; i<v.size();i++){
		cout << v[i] << " ";
	}
	cout << endl;
	mergeSort(v);
	for(int i = 0; i<v.size();i++){
		cout << v[i] << " ";
	}
}